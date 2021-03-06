/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2002 by the OpenSG Forum                 *
 *                                                                           *
 *   contact: dirk@opensg.org, gerrit.voss@vossg.org, jbehr@zgdv.de          *
 *                                                                           *
\*---------------------------------------------------------------------------*/
/*---------------------------------------------------------------------------*\
 *                                License                                    *
 *                                                                           *
 * This library is free software; you can redistribute it and/or modify it   *
 * under the terms of the GNU Library General Public License as published    *
 * by the Free Software Foundation, version 2.                               *
 *                                                                           *
 * This library is distributed in the hope that it will be useful, but       *
 * WITHOUT ANY WARRANTY; without even the implied warranty of                *
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU         *
 * Library General Public License for more details.                          *
 *                                                                           *
 * You should have received a copy of the GNU Library General Public         *
 * License along with this library; if not, write to the Free Software       *
 * Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.                 *
 *                                                                           *
\*---------------------------------------------------------------------------*/
/*---------------------------------------------------------------------------*\
 *                                Changes                                    *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
\*---------------------------------------------------------------------------*/

/*****************************************************************************\
 *****************************************************************************
 **                                                                         **
 **                  This file is automatically generated.                  **
 **                                                                         **
 **          Any changes made to this file WILL be lost when it is          **
 **           regenerated, which can become necessary at any time.          **
 **                                                                         **
 **     Do not change this file, changes should be done in the derived      **
 **     class PhysicsBody!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <OSGConfig.h>

OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &PhysicsBodyBase::getClassType(void)
{
    return _type; 
} 

//! access the numerical type of the class
inline
OSG::UInt32 PhysicsBodyBase::getClassTypeId(void) 
{
    return _type.getId(); 
} 

//! create a new instance of the class
inline
PhysicsBodyPtr PhysicsBodyBase::create(void) 
{
    PhysicsBodyPtr fc; 

    if(getClassType().getPrototype() != OSG::NullFC) 
    {
        fc = PhysicsBodyPtr::dcast(
            getClassType().getPrototype()-> shallowCopy()); 
    }
    
    return fc; 
}

//! create an empty new instance of the class, do not copy the prototype
inline
PhysicsBodyPtr PhysicsBodyBase::createEmpty(void) 
{ 
    PhysicsBodyPtr returnValue; 
    
    newPtr(returnValue); 

    return returnValue; 
}


/*------------------------------ get -----------------------------------*/

//! Get the PhysicsBody::_sfPosition field.
inline
const SFVec3f *PhysicsBodyBase::getSFPosition(void) const
{
    return &_sfPosition;
}

//! Get the PhysicsBody::_sfPosition field.
inline
SFVec3f *PhysicsBodyBase::editSFPosition(void)
{
    return &_sfPosition;
}

#ifndef OSG_2_PREP
//! Get the PhysicsBody::_sfPosition field.
inline
SFVec3f *PhysicsBodyBase::getSFPosition(void)
{
    return &_sfPosition;
}
#endif

//! Get the PhysicsBody::_sfRotation field.
inline
const SFMatrix *PhysicsBodyBase::getSFRotation(void) const
{
    return &_sfRotation;
}

//! Get the PhysicsBody::_sfRotation field.
inline
SFMatrix *PhysicsBodyBase::editSFRotation(void)
{
    return &_sfRotation;
}

#ifndef OSG_2_PREP
//! Get the PhysicsBody::_sfRotation field.
inline
SFMatrix *PhysicsBodyBase::getSFRotation(void)
{
    return &_sfRotation;
}
#endif

//! Get the PhysicsBody::_sfQuaternion field.
inline
const SFQuaternion *PhysicsBodyBase::getSFQuaternion(void) const
{
    return &_sfQuaternion;
}

//! Get the PhysicsBody::_sfQuaternion field.
inline
SFQuaternion *PhysicsBodyBase::editSFQuaternion(void)
{
    return &_sfQuaternion;
}

#ifndef OSG_2_PREP
//! Get the PhysicsBody::_sfQuaternion field.
inline
SFQuaternion *PhysicsBodyBase::getSFQuaternion(void)
{
    return &_sfQuaternion;
}
#endif

//! Get the PhysicsBody::_sfLinearVel field.
inline
const SFVec3f *PhysicsBodyBase::getSFLinearVel(void) const
{
    return &_sfLinearVel;
}

//! Get the PhysicsBody::_sfLinearVel field.
inline
SFVec3f *PhysicsBodyBase::editSFLinearVel(void)
{
    return &_sfLinearVel;
}

#ifndef OSG_2_PREP
//! Get the PhysicsBody::_sfLinearVel field.
inline
SFVec3f *PhysicsBodyBase::getSFLinearVel(void)
{
    return &_sfLinearVel;
}
#endif

//! Get the PhysicsBody::_sfAngularVel field.
inline
const SFVec3f *PhysicsBodyBase::getSFAngularVel(void) const
{
    return &_sfAngularVel;
}

//! Get the PhysicsBody::_sfAngularVel field.
inline
SFVec3f *PhysicsBodyBase::editSFAngularVel(void)
{
    return &_sfAngularVel;
}

#ifndef OSG_2_PREP
//! Get the PhysicsBody::_sfAngularVel field.
inline
SFVec3f *PhysicsBodyBase::getSFAngularVel(void)
{
    return &_sfAngularVel;
}
#endif

//! Get the PhysicsBody::_sfForce field.
inline
const SFVec3f *PhysicsBodyBase::getSFForce(void) const
{
    return &_sfForce;
}

//! Get the PhysicsBody::_sfForce field.
inline
SFVec3f *PhysicsBodyBase::editSFForce(void)
{
    return &_sfForce;
}

#ifndef OSG_2_PREP
//! Get the PhysicsBody::_sfForce field.
inline
SFVec3f *PhysicsBodyBase::getSFForce(void)
{
    return &_sfForce;
}
#endif

//! Get the PhysicsBody::_sfTorque field.
inline
const SFVec3f *PhysicsBodyBase::getSFTorque(void) const
{
    return &_sfTorque;
}

//! Get the PhysicsBody::_sfTorque field.
inline
SFVec3f *PhysicsBodyBase::editSFTorque(void)
{
    return &_sfTorque;
}

#ifndef OSG_2_PREP
//! Get the PhysicsBody::_sfTorque field.
inline
SFVec3f *PhysicsBodyBase::getSFTorque(void)
{
    return &_sfTorque;
}
#endif

//! Get the PhysicsBody::_sfEnable field.
inline
const SFBool *PhysicsBodyBase::getSFEnable(void) const
{
    return &_sfEnable;
}

//! Get the PhysicsBody::_sfEnable field.
inline
SFBool *PhysicsBodyBase::editSFEnable(void)
{
    return &_sfEnable;
}

#ifndef OSG_2_PREP
//! Get the PhysicsBody::_sfEnable field.
inline
SFBool *PhysicsBodyBase::getSFEnable(void)
{
    return &_sfEnable;
}
#endif

//! Get the PhysicsBody::_sfAutoDisableFlag field.
inline
const SFInt32 *PhysicsBodyBase::getSFAutoDisableFlag(void) const
{
    return &_sfAutoDisableFlag;
}

//! Get the PhysicsBody::_sfAutoDisableFlag field.
inline
SFInt32 *PhysicsBodyBase::editSFAutoDisableFlag(void)
{
    return &_sfAutoDisableFlag;
}

#ifndef OSG_2_PREP
//! Get the PhysicsBody::_sfAutoDisableFlag field.
inline
SFInt32 *PhysicsBodyBase::getSFAutoDisableFlag(void)
{
    return &_sfAutoDisableFlag;
}
#endif

//! Get the PhysicsBody::_sfAutoDisableLinearThreshol field.
inline
const SFReal32 *PhysicsBodyBase::getSFAutoDisableLinearThreshol(void) const
{
    return &_sfAutoDisableLinearThreshol;
}

//! Get the PhysicsBody::_sfAutoDisableLinearThreshol field.
inline
SFReal32 *PhysicsBodyBase::editSFAutoDisableLinearThreshol(void)
{
    return &_sfAutoDisableLinearThreshol;
}

#ifndef OSG_2_PREP
//! Get the PhysicsBody::_sfAutoDisableLinearThreshol field.
inline
SFReal32 *PhysicsBodyBase::getSFAutoDisableLinearThreshol(void)
{
    return &_sfAutoDisableLinearThreshol;
}
#endif

//! Get the PhysicsBody::_sfAutoDisableAngularThreshol field.
inline
const SFReal32 *PhysicsBodyBase::getSFAutoDisableAngularThreshol(void) const
{
    return &_sfAutoDisableAngularThreshol;
}

//! Get the PhysicsBody::_sfAutoDisableAngularThreshol field.
inline
SFReal32 *PhysicsBodyBase::editSFAutoDisableAngularThreshol(void)
{
    return &_sfAutoDisableAngularThreshol;
}

#ifndef OSG_2_PREP
//! Get the PhysicsBody::_sfAutoDisableAngularThreshol field.
inline
SFReal32 *PhysicsBodyBase::getSFAutoDisableAngularThreshol(void)
{
    return &_sfAutoDisableAngularThreshol;
}
#endif

//! Get the PhysicsBody::_sfAutoDisableSteps field.
inline
const SFInt32 *PhysicsBodyBase::getSFAutoDisableSteps(void) const
{
    return &_sfAutoDisableSteps;
}

//! Get the PhysicsBody::_sfAutoDisableSteps field.
inline
SFInt32 *PhysicsBodyBase::editSFAutoDisableSteps(void)
{
    return &_sfAutoDisableSteps;
}

#ifndef OSG_2_PREP
//! Get the PhysicsBody::_sfAutoDisableSteps field.
inline
SFInt32 *PhysicsBodyBase::getSFAutoDisableSteps(void)
{
    return &_sfAutoDisableSteps;
}
#endif

//! Get the PhysicsBody::_sfAutoDisableTime field.
inline
const SFReal32 *PhysicsBodyBase::getSFAutoDisableTime(void) const
{
    return &_sfAutoDisableTime;
}

//! Get the PhysicsBody::_sfAutoDisableTime field.
inline
SFReal32 *PhysicsBodyBase::editSFAutoDisableTime(void)
{
    return &_sfAutoDisableTime;
}

#ifndef OSG_2_PREP
//! Get the PhysicsBody::_sfAutoDisableTime field.
inline
SFReal32 *PhysicsBodyBase::getSFAutoDisableTime(void)
{
    return &_sfAutoDisableTime;
}
#endif

//! Get the PhysicsBody::_sfFiniteRotationMode field.
inline
const SFInt32 *PhysicsBodyBase::getSFFiniteRotationMode(void) const
{
    return &_sfFiniteRotationMode;
}

//! Get the PhysicsBody::_sfFiniteRotationMode field.
inline
SFInt32 *PhysicsBodyBase::editSFFiniteRotationMode(void)
{
    return &_sfFiniteRotationMode;
}

#ifndef OSG_2_PREP
//! Get the PhysicsBody::_sfFiniteRotationMode field.
inline
SFInt32 *PhysicsBodyBase::getSFFiniteRotationMode(void)
{
    return &_sfFiniteRotationMode;
}
#endif

//! Get the PhysicsBody::_sfFiniteRotationAxis field.
inline
const SFVec3f *PhysicsBodyBase::getSFFiniteRotationAxis(void) const
{
    return &_sfFiniteRotationAxis;
}

//! Get the PhysicsBody::_sfFiniteRotationAxis field.
inline
SFVec3f *PhysicsBodyBase::editSFFiniteRotationAxis(void)
{
    return &_sfFiniteRotationAxis;
}

#ifndef OSG_2_PREP
//! Get the PhysicsBody::_sfFiniteRotationAxis field.
inline
SFVec3f *PhysicsBodyBase::getSFFiniteRotationAxis(void)
{
    return &_sfFiniteRotationAxis;
}
#endif

//! Get the PhysicsBody::_sfGravityMode field.
inline
const SFBool *PhysicsBodyBase::getSFGravityMode(void) const
{
    return &_sfGravityMode;
}

//! Get the PhysicsBody::_sfGravityMode field.
inline
SFBool *PhysicsBodyBase::editSFGravityMode(void)
{
    return &_sfGravityMode;
}

#ifndef OSG_2_PREP
//! Get the PhysicsBody::_sfGravityMode field.
inline
SFBool *PhysicsBodyBase::getSFGravityMode(void)
{
    return &_sfGravityMode;
}
#endif

//! Get the PhysicsBody::_sfWorld field.
inline
const SFPhysicsWorldPtr *PhysicsBodyBase::getSFWorld(void) const
{
    return &_sfWorld;
}

//! Get the PhysicsBody::_sfWorld field.
inline
SFPhysicsWorldPtr *PhysicsBodyBase::editSFWorld(void)
{
    return &_sfWorld;
}

#ifndef OSG_2_PREP
//! Get the PhysicsBody::_sfWorld field.
inline
SFPhysicsWorldPtr *PhysicsBodyBase::getSFWorld(void)
{
    return &_sfWorld;
}
#endif


//! Get the value of the PhysicsBody::_sfPosition field.
inline
Vec3f &PhysicsBodyBase::editPosition(void)
{
    return _sfPosition.getValue();
}

//! Get the value of the PhysicsBody::_sfPosition field.
inline
const Vec3f &PhysicsBodyBase::getPosition(void) const
{
    return _sfPosition.getValue();
}

#ifndef OSG_2_PREP
//! Get the value of the PhysicsBody::_sfPosition field.
inline
Vec3f &PhysicsBodyBase::getPosition(void)
{
    return _sfPosition.getValue();
}
#endif

//! Set the value of the PhysicsBody::_sfPosition field.
inline
void PhysicsBodyBase::setPosition(const Vec3f &value)
{
    _sfPosition.setValue(value);
}

//! Get the value of the PhysicsBody::_sfRotation field.
inline
Matrix &PhysicsBodyBase::editRotation(void)
{
    return _sfRotation.getValue();
}

//! Get the value of the PhysicsBody::_sfRotation field.
inline
const Matrix &PhysicsBodyBase::getRotation(void) const
{
    return _sfRotation.getValue();
}

#ifndef OSG_2_PREP
//! Get the value of the PhysicsBody::_sfRotation field.
inline
Matrix &PhysicsBodyBase::getRotation(void)
{
    return _sfRotation.getValue();
}
#endif

//! Set the value of the PhysicsBody::_sfRotation field.
inline
void PhysicsBodyBase::setRotation(const Matrix &value)
{
    _sfRotation.setValue(value);
}

//! Get the value of the PhysicsBody::_sfQuaternion field.
inline
Quaternion &PhysicsBodyBase::editQuaternion(void)
{
    return _sfQuaternion.getValue();
}

//! Get the value of the PhysicsBody::_sfQuaternion field.
inline
const Quaternion &PhysicsBodyBase::getQuaternion(void) const
{
    return _sfQuaternion.getValue();
}

#ifndef OSG_2_PREP
//! Get the value of the PhysicsBody::_sfQuaternion field.
inline
Quaternion &PhysicsBodyBase::getQuaternion(void)
{
    return _sfQuaternion.getValue();
}
#endif

//! Set the value of the PhysicsBody::_sfQuaternion field.
inline
void PhysicsBodyBase::setQuaternion(const Quaternion &value)
{
    _sfQuaternion.setValue(value);
}

//! Get the value of the PhysicsBody::_sfLinearVel field.
inline
Vec3f &PhysicsBodyBase::editLinearVel(void)
{
    return _sfLinearVel.getValue();
}

//! Get the value of the PhysicsBody::_sfLinearVel field.
inline
const Vec3f &PhysicsBodyBase::getLinearVel(void) const
{
    return _sfLinearVel.getValue();
}

#ifndef OSG_2_PREP
//! Get the value of the PhysicsBody::_sfLinearVel field.
inline
Vec3f &PhysicsBodyBase::getLinearVel(void)
{
    return _sfLinearVel.getValue();
}
#endif

//! Set the value of the PhysicsBody::_sfLinearVel field.
inline
void PhysicsBodyBase::setLinearVel(const Vec3f &value)
{
    _sfLinearVel.setValue(value);
}

//! Get the value of the PhysicsBody::_sfAngularVel field.
inline
Vec3f &PhysicsBodyBase::editAngularVel(void)
{
    return _sfAngularVel.getValue();
}

//! Get the value of the PhysicsBody::_sfAngularVel field.
inline
const Vec3f &PhysicsBodyBase::getAngularVel(void) const
{
    return _sfAngularVel.getValue();
}

#ifndef OSG_2_PREP
//! Get the value of the PhysicsBody::_sfAngularVel field.
inline
Vec3f &PhysicsBodyBase::getAngularVel(void)
{
    return _sfAngularVel.getValue();
}
#endif

//! Set the value of the PhysicsBody::_sfAngularVel field.
inline
void PhysicsBodyBase::setAngularVel(const Vec3f &value)
{
    _sfAngularVel.setValue(value);
}

//! Get the value of the PhysicsBody::_sfForce field.
inline
Vec3f &PhysicsBodyBase::editForce(void)
{
    return _sfForce.getValue();
}

//! Get the value of the PhysicsBody::_sfForce field.
inline
const Vec3f &PhysicsBodyBase::getForce(void) const
{
    return _sfForce.getValue();
}

#ifndef OSG_2_PREP
//! Get the value of the PhysicsBody::_sfForce field.
inline
Vec3f &PhysicsBodyBase::getForce(void)
{
    return _sfForce.getValue();
}
#endif

//! Set the value of the PhysicsBody::_sfForce field.
inline
void PhysicsBodyBase::setForce(const Vec3f &value)
{
    _sfForce.setValue(value);
}

//! Get the value of the PhysicsBody::_sfTorque field.
inline
Vec3f &PhysicsBodyBase::editTorque(void)
{
    return _sfTorque.getValue();
}

//! Get the value of the PhysicsBody::_sfTorque field.
inline
const Vec3f &PhysicsBodyBase::getTorque(void) const
{
    return _sfTorque.getValue();
}

#ifndef OSG_2_PREP
//! Get the value of the PhysicsBody::_sfTorque field.
inline
Vec3f &PhysicsBodyBase::getTorque(void)
{
    return _sfTorque.getValue();
}
#endif

//! Set the value of the PhysicsBody::_sfTorque field.
inline
void PhysicsBodyBase::setTorque(const Vec3f &value)
{
    _sfTorque.setValue(value);
}

//! Get the value of the PhysicsBody::_sfEnable field.
inline
bool &PhysicsBodyBase::editEnable(void)
{
    return _sfEnable.getValue();
}

//! Get the value of the PhysicsBody::_sfEnable field.
inline
const bool &PhysicsBodyBase::getEnable(void) const
{
    return _sfEnable.getValue();
}

#ifndef OSG_2_PREP
//! Get the value of the PhysicsBody::_sfEnable field.
inline
bool &PhysicsBodyBase::getEnable(void)
{
    return _sfEnable.getValue();
}
#endif

//! Set the value of the PhysicsBody::_sfEnable field.
inline
void PhysicsBodyBase::setEnable(const bool &value)
{
    _sfEnable.setValue(value);
}

//! Get the value of the PhysicsBody::_sfAutoDisableFlag field.
inline
Int32 &PhysicsBodyBase::editAutoDisableFlag(void)
{
    return _sfAutoDisableFlag.getValue();
}

//! Get the value of the PhysicsBody::_sfAutoDisableFlag field.
inline
const Int32 &PhysicsBodyBase::getAutoDisableFlag(void) const
{
    return _sfAutoDisableFlag.getValue();
}

#ifndef OSG_2_PREP
//! Get the value of the PhysicsBody::_sfAutoDisableFlag field.
inline
Int32 &PhysicsBodyBase::getAutoDisableFlag(void)
{
    return _sfAutoDisableFlag.getValue();
}
#endif

//! Set the value of the PhysicsBody::_sfAutoDisableFlag field.
inline
void PhysicsBodyBase::setAutoDisableFlag(const Int32 &value)
{
    _sfAutoDisableFlag.setValue(value);
}

//! Get the value of the PhysicsBody::_sfAutoDisableLinearThreshol field.
inline
Real32 &PhysicsBodyBase::editAutoDisableLinearThreshol(void)
{
    return _sfAutoDisableLinearThreshol.getValue();
}

//! Get the value of the PhysicsBody::_sfAutoDisableLinearThreshol field.
inline
const Real32 &PhysicsBodyBase::getAutoDisableLinearThreshol(void) const
{
    return _sfAutoDisableLinearThreshol.getValue();
}

#ifndef OSG_2_PREP
//! Get the value of the PhysicsBody::_sfAutoDisableLinearThreshol field.
inline
Real32 &PhysicsBodyBase::getAutoDisableLinearThreshol(void)
{
    return _sfAutoDisableLinearThreshol.getValue();
}
#endif

//! Set the value of the PhysicsBody::_sfAutoDisableLinearThreshol field.
inline
void PhysicsBodyBase::setAutoDisableLinearThreshol(const Real32 &value)
{
    _sfAutoDisableLinearThreshol.setValue(value);
}

//! Get the value of the PhysicsBody::_sfAutoDisableAngularThreshol field.
inline
Real32 &PhysicsBodyBase::editAutoDisableAngularThreshol(void)
{
    return _sfAutoDisableAngularThreshol.getValue();
}

//! Get the value of the PhysicsBody::_sfAutoDisableAngularThreshol field.
inline
const Real32 &PhysicsBodyBase::getAutoDisableAngularThreshol(void) const
{
    return _sfAutoDisableAngularThreshol.getValue();
}

#ifndef OSG_2_PREP
//! Get the value of the PhysicsBody::_sfAutoDisableAngularThreshol field.
inline
Real32 &PhysicsBodyBase::getAutoDisableAngularThreshol(void)
{
    return _sfAutoDisableAngularThreshol.getValue();
}
#endif

//! Set the value of the PhysicsBody::_sfAutoDisableAngularThreshol field.
inline
void PhysicsBodyBase::setAutoDisableAngularThreshol(const Real32 &value)
{
    _sfAutoDisableAngularThreshol.setValue(value);
}

//! Get the value of the PhysicsBody::_sfAutoDisableSteps field.
inline
Int32 &PhysicsBodyBase::editAutoDisableSteps(void)
{
    return _sfAutoDisableSteps.getValue();
}

//! Get the value of the PhysicsBody::_sfAutoDisableSteps field.
inline
const Int32 &PhysicsBodyBase::getAutoDisableSteps(void) const
{
    return _sfAutoDisableSteps.getValue();
}

#ifndef OSG_2_PREP
//! Get the value of the PhysicsBody::_sfAutoDisableSteps field.
inline
Int32 &PhysicsBodyBase::getAutoDisableSteps(void)
{
    return _sfAutoDisableSteps.getValue();
}
#endif

//! Set the value of the PhysicsBody::_sfAutoDisableSteps field.
inline
void PhysicsBodyBase::setAutoDisableSteps(const Int32 &value)
{
    _sfAutoDisableSteps.setValue(value);
}

//! Get the value of the PhysicsBody::_sfAutoDisableTime field.
inline
Real32 &PhysicsBodyBase::editAutoDisableTime(void)
{
    return _sfAutoDisableTime.getValue();
}

//! Get the value of the PhysicsBody::_sfAutoDisableTime field.
inline
const Real32 &PhysicsBodyBase::getAutoDisableTime(void) const
{
    return _sfAutoDisableTime.getValue();
}

#ifndef OSG_2_PREP
//! Get the value of the PhysicsBody::_sfAutoDisableTime field.
inline
Real32 &PhysicsBodyBase::getAutoDisableTime(void)
{
    return _sfAutoDisableTime.getValue();
}
#endif

//! Set the value of the PhysicsBody::_sfAutoDisableTime field.
inline
void PhysicsBodyBase::setAutoDisableTime(const Real32 &value)
{
    _sfAutoDisableTime.setValue(value);
}

//! Get the value of the PhysicsBody::_sfFiniteRotationMode field.
inline
Int32 &PhysicsBodyBase::editFiniteRotationMode(void)
{
    return _sfFiniteRotationMode.getValue();
}

//! Get the value of the PhysicsBody::_sfFiniteRotationMode field.
inline
const Int32 &PhysicsBodyBase::getFiniteRotationMode(void) const
{
    return _sfFiniteRotationMode.getValue();
}

#ifndef OSG_2_PREP
//! Get the value of the PhysicsBody::_sfFiniteRotationMode field.
inline
Int32 &PhysicsBodyBase::getFiniteRotationMode(void)
{
    return _sfFiniteRotationMode.getValue();
}
#endif

//! Set the value of the PhysicsBody::_sfFiniteRotationMode field.
inline
void PhysicsBodyBase::setFiniteRotationMode(const Int32 &value)
{
    _sfFiniteRotationMode.setValue(value);
}

//! Get the value of the PhysicsBody::_sfFiniteRotationAxis field.
inline
Vec3f &PhysicsBodyBase::editFiniteRotationAxis(void)
{
    return _sfFiniteRotationAxis.getValue();
}

//! Get the value of the PhysicsBody::_sfFiniteRotationAxis field.
inline
const Vec3f &PhysicsBodyBase::getFiniteRotationAxis(void) const
{
    return _sfFiniteRotationAxis.getValue();
}

#ifndef OSG_2_PREP
//! Get the value of the PhysicsBody::_sfFiniteRotationAxis field.
inline
Vec3f &PhysicsBodyBase::getFiniteRotationAxis(void)
{
    return _sfFiniteRotationAxis.getValue();
}
#endif

//! Set the value of the PhysicsBody::_sfFiniteRotationAxis field.
inline
void PhysicsBodyBase::setFiniteRotationAxis(const Vec3f &value)
{
    _sfFiniteRotationAxis.setValue(value);
}

//! Get the value of the PhysicsBody::_sfGravityMode field.
inline
bool &PhysicsBodyBase::editGravityMode(void)
{
    return _sfGravityMode.getValue();
}

//! Get the value of the PhysicsBody::_sfGravityMode field.
inline
const bool &PhysicsBodyBase::getGravityMode(void) const
{
    return _sfGravityMode.getValue();
}

#ifndef OSG_2_PREP
//! Get the value of the PhysicsBody::_sfGravityMode field.
inline
bool &PhysicsBodyBase::getGravityMode(void)
{
    return _sfGravityMode.getValue();
}
#endif

//! Set the value of the PhysicsBody::_sfGravityMode field.
inline
void PhysicsBodyBase::setGravityMode(const bool &value)
{
    _sfGravityMode.setValue(value);
}

//! Get the value of the PhysicsBody::_sfWorld field.
inline
PhysicsWorldPtr &PhysicsBodyBase::editWorld(void)
{
    return _sfWorld.getValue();
}

//! Get the value of the PhysicsBody::_sfWorld field.
inline
const PhysicsWorldPtr &PhysicsBodyBase::getWorld(void) const
{
    return _sfWorld.getValue();
}

#ifndef OSG_2_PREP
//! Get the value of the PhysicsBody::_sfWorld field.
inline
PhysicsWorldPtr &PhysicsBodyBase::getWorld(void)
{
    return _sfWorld.getValue();
}
#endif

//! Set the value of the PhysicsBody::_sfWorld field.
inline
void PhysicsBodyBase::setWorld(const PhysicsWorldPtr &value)
{
    _sfWorld.setValue(value);
}


OSG_END_NAMESPACE

#define OSGPHYSICSBODYBASE_INLINE_CVSID "@(#)$Id: OSGPhysicsBodyBase.inl,v 1.5 2008/06/09 12:28:02 vossg Exp $"

