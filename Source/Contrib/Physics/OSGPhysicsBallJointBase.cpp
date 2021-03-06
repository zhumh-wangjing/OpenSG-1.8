/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2002 by the OpenSG Forum                 *
 *                                                                           *
 *                            www.opensg.org                                 *
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
 **     class PhysicsBallJoint!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILEPHYSICSBALLJOINTINST

#include <stdlib.h>
#include <stdio.h>

#include <OSGConfig.h>

#include "OSGPhysicsBallJointBase.h"
#include "OSGPhysicsBallJoint.h"


OSG_BEGIN_NAMESPACE

const OSG::BitVector  PhysicsBallJointBase::AnchorFieldMask = 
    (TypeTraits<BitVector>::One << PhysicsBallJointBase::AnchorFieldId);

const OSG::BitVector PhysicsBallJointBase::MTInfluenceMask = 
    (Inherited::MTInfluenceMask) | 
    (static_cast<BitVector>(0x0) << Inherited::NextFieldId); 


// Field descriptions

/*! \var Vec3f           PhysicsBallJointBase::_sfAnchor
    
*/

//! PhysicsBallJoint description

FieldDescription *PhysicsBallJointBase::_desc[] = 
{
    new FieldDescription(SFVec3f::getClassType(), 
                     "anchor", 
                     AnchorFieldId, AnchorFieldMask,
                     false,
                     reinterpret_cast<FieldAccessMethod>(&PhysicsBallJointBase::editSFAnchor))
};


FieldContainerType PhysicsBallJointBase::_type(
    "PhysicsBallJoint",
    "PhysicsJoint",
    NULL,
    reinterpret_cast<PrototypeCreateF>(&PhysicsBallJointBase::createEmpty),
    PhysicsBallJoint::initMethod,
    _desc,
    sizeof(_desc));

//OSG_FIELD_CONTAINER_DEF(PhysicsBallJointBase, PhysicsBallJointPtr)

/*------------------------------ get -----------------------------------*/

FieldContainerType &PhysicsBallJointBase::getType(void) 
{
    return _type; 
} 

const FieldContainerType &PhysicsBallJointBase::getType(void) const 
{
    return _type;
} 


FieldContainerPtr PhysicsBallJointBase::shallowCopy(void) const 
{ 
    PhysicsBallJointPtr returnValue; 

    newPtr(returnValue, dynamic_cast<const PhysicsBallJoint *>(this)); 

    return returnValue; 
}

UInt32 PhysicsBallJointBase::getContainerSize(void) const 
{ 
    return sizeof(PhysicsBallJoint); 
}


#if !defined(OSG_FIXED_MFIELDSYNC)
void PhysicsBallJointBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField)
{
    this->executeSyncImpl(static_cast<PhysicsBallJointBase *>(&other),
                          whichField);
}
#else
void PhysicsBallJointBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField,                                    const SyncInfo       &sInfo     )
{
    this->executeSyncImpl((PhysicsBallJointBase *) &other, whichField, sInfo);
}
void PhysicsBallJointBase::execBeginEdit(const BitVector &whichField, 
                                            UInt32     uiAspect,
                                            UInt32     uiContainerSize) 
{
    this->execBeginEditImpl(whichField, uiAspect, uiContainerSize);
}

void PhysicsBallJointBase::onDestroyAspect(UInt32 uiId, UInt32 uiAspect)
{
    Inherited::onDestroyAspect(uiId, uiAspect);

}
#endif

/*------------------------- constructors ----------------------------------*/

#ifdef OSG_WIN32_ICL
#pragma warning (disable : 383)
#endif

PhysicsBallJointBase::PhysicsBallJointBase(void) :
    _sfAnchor                 (), 
    Inherited() 
{
}

#ifdef OSG_WIN32_ICL
#pragma warning (default : 383)
#endif

PhysicsBallJointBase::PhysicsBallJointBase(const PhysicsBallJointBase &source) :
    _sfAnchor                 (source._sfAnchor                 ), 
    Inherited                 (source)
{
}

/*-------------------------- destructors ----------------------------------*/

PhysicsBallJointBase::~PhysicsBallJointBase(void)
{
}

/*------------------------------ access -----------------------------------*/

UInt32 PhysicsBallJointBase::getBinSize(const BitVector &whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (AnchorFieldMask & whichField))
    {
        returnValue += _sfAnchor.getBinSize();
    }


    return returnValue;
}

void PhysicsBallJointBase::copyToBin(      BinaryDataHandler &pMem,
                                  const BitVector         &whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (AnchorFieldMask & whichField))
    {
        _sfAnchor.copyToBin(pMem);
    }


}

void PhysicsBallJointBase::copyFromBin(      BinaryDataHandler &pMem,
                                    const BitVector    &whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (AnchorFieldMask & whichField))
    {
        _sfAnchor.copyFromBin(pMem);
    }


}

#if !defined(OSG_FIXED_MFIELDSYNC)
void PhysicsBallJointBase::executeSyncImpl(      PhysicsBallJointBase *pOther,
                                        const BitVector         &whichField)
{

    Inherited::executeSyncImpl(pOther, whichField);

    if(FieldBits::NoField != (AnchorFieldMask & whichField))
        _sfAnchor.syncWith(pOther->_sfAnchor);


}
#else
void PhysicsBallJointBase::executeSyncImpl(      PhysicsBallJointBase *pOther,
                                        const BitVector         &whichField,
                                        const SyncInfo          &sInfo      )
{

    Inherited::executeSyncImpl(pOther, whichField, sInfo);

    if(FieldBits::NoField != (AnchorFieldMask & whichField))
        _sfAnchor.syncWith(pOther->_sfAnchor);



}

void PhysicsBallJointBase::execBeginEditImpl (const BitVector &whichField, 
                                                 UInt32     uiAspect,
                                                 UInt32     uiContainerSize)
{
    Inherited::execBeginEditImpl(whichField, uiAspect, uiContainerSize);

}
#endif



OSG_END_NAMESPACE

#include <OSGSFieldTypeDef.inl>
#include <OSGMFieldTypeDef.inl>

OSG_BEGIN_NAMESPACE

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldDataTraits<PhysicsBallJointPtr>::_type("PhysicsBallJointPtr", "PhysicsJointPtr");
#endif

OSG_DLLEXPORT_SFIELD_DEF1(PhysicsBallJointPtr, OSG_CONTRIBLIB_DLLTMPLMAPPING);
OSG_DLLEXPORT_MFIELD_DEF1(PhysicsBallJointPtr, OSG_CONTRIBLIB_DLLTMPLMAPPING);


/*------------------------------------------------------------------------*/
/*                              cvs id's                                  */

#ifdef OSG_SGI_CC
#pragma set woff 1174
#endif

#ifdef OSG_LINUX_ICC
#pragma warning( disable : 177 )
#endif

namespace
{
    static Char8 cvsid_cpp       [] = "@(#)$Id: OSGPhysicsBallJointBase.cpp,v 1.5 2008/06/09 12:28:02 vossg Exp $";
    static Char8 cvsid_hpp       [] = OSGPHYSICSBALLJOINTBASE_HEADER_CVSID;
    static Char8 cvsid_inl       [] = OSGPHYSICSBALLJOINTBASE_INLINE_CVSID;

    static Char8 cvsid_fields_hpp[] = OSGPHYSICSBALLJOINTFIELDS_HEADER_CVSID;
}

OSG_END_NAMESPACE

