//在 SolidEntity.h 中,BodyPhysicsMode 枚举明确定义如:(stonefish/Library/include/entities/SolidEntity.h)
	// DISABLED    -> no computation of physics, zero mass and inertia   禁用物理计算
    // 在 ComputeHydrodynamicForces 和 ComputeAerodynamicForces 中，如果 phy.mode 是 DISABLED,这些函数会直接返回,不计算任何力

 	// SURFACE     -> no aerodynamics or hydrodynamics                   适用于陆地或在水面上的物体  船只水面滑动 忽略流体效应
    // 在 ComputeHydrodynamicForces 中，如果 phy.mode 是 SURFACE,函数直接返回,不计算浮力或阻尼力
    // 见 Compound.cpp 中的 if(phy.mode != BodyPhysicsMode::FLOATING && phy.mode != BodyPhysicsMode::SUBMERGED) return;

 	// FLOATING    -> hydrodynamics with buoyancy			             物体在液体表面，考虑流体力学与浮力
    // 在 ComputeHydrodynamicForces 中，如果 phy.mode 是 FLOATING 且物体处于 CROSSING_SURFACE 或 INSIDE 状态，会调用 
    // ComputeHydrodynamicForcesSurface 计算浮力和阻尼力
    // 见 Compound.cpp 浮力通过 Fb = -volume*ocn->getLiquid().density * SimulationApp::getApp()->getSimulationManager()->getGravity(); 计算。
    // 不考虑附加质量 added mass 与 SUBMERGED 模式的主要区别。

 	// SUBMERGED   -> hydrodynamics with buoyancy and added mass	     物体完全浸没在液体中，考虑流体力学/浮力和附加质量
    // 在 ComputeHydrodynamicForces 中，如果 phy.mode 是 SUBMERGED 且物体处于 INSIDE 状态，会调用 
    // ComputeHydrodynamicForcesSubmerged 计算阻尼力，并通过附加质量调整物体的动态行为（见 Compound.cpp)
    // 附加质量通过 aMass 和 aI(SolidEntity 的成员变量）存储，影响 getAugmentedMass 和 getAugmentedInertia
    // 浮力计算与 FLOATING 类似，但附加质量使动力学更复杂

 	// AERODYNAMIC -> aerodynamics					                     空中，考虑空气动力学 
// 	

struct BodyPhysicsSettings
{
    BodyPhysicsMode mode;
    bool collisions;
    bool buoyancy;
    BodyPhysicsSettings() : mode(BodyPhysicsMode::SUBMERGED), collisions(true), buoyancy(true)
    {
    }
};


// SUBMERGED 模式的物理计算
void Compound::ComputeHydrodynamicForces(HydrodynamicsSettings settings, Ocean* ocn)
{
    if(bf == BodyFluidPosition::INSIDE)
    {
        // 1. 计算浮力
        if(isBuoyant())
        {   // 浮力 +  浮力力矩
            Fb = -volume*ocn->getLiquid().density * SimulationApp::getApp()->getSimulationManager()->getGravity();
            Tb = (getCGTransform() * P_CB - getCGTransform().getOrigin()).cross(Fb);
        }  
        //  体积的计算 :  在 Compound::RecalculatePhysicalProperties 中计算 (之后需要关注的点)
        //  对于复合体, volume 是所有部分的体积总和（仅考虑 isBuoyant() 为真的部分）
        //  浮力中心的计算 : 在 Compound::RecalculatePhysicalProperties中, 是所有部分的浮力中心加权平均(按体积加权)
        
        // 2. 计算阻尼力 （形式阻力 Fdq,Tdq) + （皮肤摩擦力 Fdf,Tdf)  通过 ComputeHydrodynamicForcesSubmerged 计算
        if(settings.dampingForces)
        {
            //Set zero
            Fdq.setZero();
            Tdq.setZero();
            Fdf.setZero();
            Tdf.setZero();
            
            //Get velocity data
            Vector3 v = getLinearVelocity();
            Vector3 omega = getAngularVelocity();
            
            //Create temporary vectors for summing
            Vector3 Fdqp(0,0,0);
            Vector3 Tdqp(0,0,0);
            Vector3 Fdfp(0,0,0);
            Vector3 Tdfp(0,0,0);
            
            for(size_t i=0; i<parts.size(); ++i) //Go through all parts
                if(parts[i].isExternal 
                    && (parts[i].solid->getBodyPhysicsMode() == BodyPhysicsMode::SUBMERGED
                    || parts[i].solid->getBodyPhysicsMode() == BodyPhysicsMode::FLOATING)) //Compute drag only for external parts
                {
                    Transform T_C_part = getOTransform() * parts[i].origin * parts[i].solid->getO2CTransform();
                    ComputeHydrodynamicForcesSubmerged(parts[i].solid->getPhysicsMesh(), ocn, getCGTransform(), T_C_part, v, omega, Fdqp, Tdqp, Fdfp, Tdfp);
                    parts[i].solid->CorrectHydrodynamicForces(ocn, Fdqp, Tdqp, Fdfp, Tdfp);
                    Fdq += Fdqp;
                    Tdq += Tdqp;
                    Fdf += Fdfp;
                    Tdf += Tdfp;
                }
        }

        Swet = surface;
        Vsub = volume;
    }
    else //CROSSING FLUID SURFACE (compound body but not necessarily all parts!)
    {
        if(settings.reallisticBuoyancy || settings.dampingForces)
        {
            //Clear forces that will be recomputed
            if(settings.reallisticBuoyancy)
            {
                Fb.setZero();
                Tb.setZero();
            }
        
            if(settings.dampingForces)
            {
                Fdq.setZero();
                Tdq.setZero();
                Fdf.setZero();
                Tdf.setZero();
            }

            Swet = Scalar(0);
            Vsub = Scalar(0);
        
            //Get velocity data
            Vector3 v = getLinearVelocity();
            Vector3 omega = getAngularVelocity();
        
            //Create temporary vectors for summing
            Vector3 Fbp(0,0,0);
            Vector3 Tbp(0,0,0);
            Vector3 Fdqp(0,0,0);
            Vector3 Tdqp(0,0,0);
            Vector3 Fdfp(0,0,0);
            Vector3 Tdfp(0,0,0);
            Scalar Swetp(0);
            Scalar Vsubp(0);

            for(size_t i=0; i<parts.size(); ++i) //Loop through all parts
            {
                if(parts[i].solid->getBodyPhysicsMode() != BodyPhysicsMode::SUBMERGED
                    && parts[i].solid->getBodyPhysicsMode() != BodyPhysicsMode::FLOATING)
                    continue;

                Transform T_C_part = getOTransform() * parts[i].origin * parts[i].solid->getO2CTransform();
                HydrodynamicsSettings pSettings = settings;
                pSettings.reallisticBuoyancy &= parts[i].solid->isBuoyant();

                if(parts[i].isExternal) //Compute buoyancy and drag
                {
                    ComputeHydrodynamicForcesSurface(pSettings, parts[i].solid->getPhysicsMesh(), ocn, getCGTransform(), T_C_part, v, omega, Fbp, Tbp, Fdqp, Tdqp, Fdfp, Tdfp, Swetp, Vsubp, submerged);
                    parts[i].solid->CorrectHydrodynamicForces(ocn, Fdqp, Tdqp, Fdfp, Tdfp);
                    Fb += Fbp;
                    Tb += Tbp;
                    Fdq += Fdqp;
                    Tdq += Tdqp;
                    Fdf += Fdfp;
                    Tdf += Tdfp;
                    Swet += Swetp;
                    Vsub += Vsubp;
                }
                else if(pSettings.reallisticBuoyancy) //Compute only buoyancy
                {
                    pSettings.dampingForces = false;
                    ComputeHydrodynamicForcesSurface(pSettings, parts[i].solid->getPhysicsMesh(), ocn, getCGTransform(), T_C_part, v, omega, Fbp, Tbp, Fdqp, Tdqp, Fdfp, Tdfp, Swetp, Vsubp, submerged);
                    Fb += Fbp;
                    Tb += Tbp;
                    Vsub += Vsubp;
                }
            }
        }
    }
}

 // 3. 附加质量力  
 void Compound::RecalculatePhysicalProperties()
{
    // 附加质量存储在 aMass(线性附加质量)和 aI(旋转附加质量)
    
    // 计算刚体属性
    /*
    1. 计算复合体的总质量和质心（质心位置 = 各部分质心位置 * 质量 / 总质量的和）
    2. 计算每个部分在全局坐标系和复合体质心处的惯量（旋转和平移惯量张量)3x3矩阵,并计算复合体的总惯量3x3矩阵(各部分惯量的和)
    3. 计算主惯量矩
    4. 找到主惯量轴
    5. 旋转坐标系以匹配主惯量轴，并移动到质心
    */
     
     
    //1. Calculate compound mass, CG and CB
    Vector3 compoundCG(0,0,0); //In compound body origin frame
    Vector3 compoundCB(0,0,0); //In compound body origin frame
    Scalar compoundMass(0);
    Scalar compoundAugmentedMass(0);
    Scalar compoundVolume(0);
    Scalar compoundSurface(0);
    
    T_CG2O = T_CG2C = T_CG2G = Transform::getIdentity();
    P_CB = Vector3(0,0,0);
        
    for(size_t i=0; i<parts.size(); ++i)
    {
        //Mechanical parameters
        compoundMass += parts[i].solid->getMass();
        compoundAugmentedMass += parts[i].isExternal ? parts[i].solid->getAugmentedMass() : parts[i].solid->getMass();
        compoundCG += (parts[i].origin * parts[i].solid->getCG2OTransform().inverse()).getOrigin() * parts[i].solid->getMass();
        
        if(parts[i].solid->isBuoyant())
        {
            compoundVolume += parts[i].solid->getVolume();
            compoundCB += parts[i].origin * parts[i].solid->getCG2OTransform().inverse() * parts[i].solid->getCB() * parts[i].solid->getVolume();
        }

        if(parts[i].isExternal)
            compoundSurface += parts[i].solid->getSurface();
    }
    
    //Set transform origin
    compoundCG /= compoundMass;
    if(compoundVolume > Scalar(0)) compoundCB /= compoundVolume;
    T_CG2O.setOrigin(-compoundCG);
    
    //2. Calculate compound inertia matrix
    Matrix3 I = Matrix3(0,0,0,0,0,0,0,0,0);
        
    for(unsigned int i=0; i<parts.size(); ++i)
    {
        //Calculate inertia matrix 3x3 of solid in the compound body origin frame and transform to CB
        Vector3 solidPriInertia = parts[i].isExternal ? parts[i].solid->getAugmentedInertia() : parts[i].solid->getInertia();
        Matrix3 solidInertia = Matrix3(solidPriInertia.x(), 0, 0, 0, solidPriInertia.y(), 0, 0, 0, solidPriInertia.z());
            
        //Rotate inertia tensor from part CG to compound CG
        Transform compToPart = T_CG2O * parts[i].origin * parts[i].solid->getCG2OTransform().inverse();
        solidInertia = compToPart.getBasis() * solidInertia * compToPart.getBasis().transpose();
            
        //Translate inertia tensor from part CG to compound CG
        Vector3 t = compToPart.getOrigin();
        Scalar m = parts[i].isExternal ? parts[i].solid->getAugmentedMass() : parts[i].solid->getMass();
        solidInertia += Matrix3(t.y()*t.y()+t.z()*t.z(),            -t.x()*t.y(),            -t.x()*t.z(),
                                           -t.y()*t.x(), t.x()*t.x()+t.z()*t.z(),            -t.y()*t.z(),
                                           -t.z()*t.x(),            -t.z()*t.y(), t.x()*t.x()+t.y()*t.y()).scaled(Vector3(m, m, m));
            
        //Accumulate inertia tensor
        I += solidInertia;
    }
    
    //3. Find compound moments of inertia
    Vector3 compoundPriInertia(I.getRow(0).getX(), I.getRow(1).getY(), I.getRow(2).getZ());
    
    //Check if inertia matrix is not diagonal
    if(!(btFuzzyZero(I.getRow(0).getY()) && btFuzzyZero(I.getRow(0).getZ())
         && btFuzzyZero(I.getRow(1).getX()) && btFuzzyZero(I.getRow(1).getZ())
         && btFuzzyZero(I.getRow(2).getX()) && btFuzzyZero(I.getRow(2).getY())))
    {
        //3.1. Calculate principal moments of inertia
        Scalar T = I[0][0] + I[1][1] + I[2][2]; //Ixx + Iyy + Izz
        Scalar II = I[0][0]*I[1][1] + I[0][0]*I[2][2] + I[1][1]*I[2][2] - I[0][1]*I[0][1] - I[0][2]*I[0][2] - I[1][2]*I[1][2]; //Ixx Iyy + Ixx Izz + Iyy Izz - Ixy^2 - Ixz^2 - Iyz^2
        Scalar U = btSqrt(T*T-Scalar(3.)*II)/Scalar(3.);
        Scalar theta = btAcos((-Scalar(2.)*T*T*T + Scalar(9.)*T*II - Scalar(27.)*I.determinant())/(Scalar(54.)*U*U*U));
        Scalar A = T/Scalar(3.) - Scalar(2.)*U*btCos(theta/Scalar(3.));
        Scalar B = T/Scalar(3.) - Scalar(2.)*U*btCos(theta/Scalar(3.) - Scalar(2.)*M_PI/Scalar(3.));
        Scalar C = T/Scalar(3.) - Scalar(2.)*U*btCos(theta/Scalar(3.) + Scalar(2.)*M_PI/Scalar(3.));
        compoundPriInertia = Vector3(A, B, C);
    
        //3.2. Calculate principal axes of inertia
        Matrix3 L;
        Vector3 axis1,axis2,axis3;
        axis1 = FindInertialAxis(I, A);
        axis2 = FindInertialAxis(I, B);
        axis3 = axis1.cross(axis2);
        axis2 = axis3.cross(axis1);
    
        //3.3. Rotate body so that principal axes are parallel to (x,y,z) system
        Matrix3 rotMat(axis1[0],axis2[0],axis3[0], axis1[1],axis2[1],axis3[1], axis1[2],axis2[2],axis3[2]);
        T_CG2O = Transform(rotMat, Vector3(0,0,0)).inverse() * T_CG2O;
    }
    
    T_CG2C = T_CG2G = T_CG2O;
    
    //Move CB to compound CG frame
    P_CB = T_CG2O * compoundCB;
    
    mass = compoundMass;
    aMass.setX(compoundAugmentedMass - compoundMass);
    aMass.setY(compoundAugmentedMass - compoundMass);
    aMass.setZ(compoundAugmentedMass - compoundMass);
    volume = compoundVolume;
    surface = compoundSurface;
    Ipri = compoundPriInertia;
}

