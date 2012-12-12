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
 **     class FragmentProgramChunk!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILEFRAGMENTPROGRAMCHUNKINST

#include <stdlib.h>
#include <stdio.h>

#include <OSGConfig.h>

#include "OSGFragmentProgramChunkBase.h"
#include "OSGFragmentProgramChunk.h"


OSG_BEGIN_NAMESPACE

const OSG::BitVector FragmentProgramChunkBase::MTInfluenceMask = 
    (Inherited::MTInfluenceMask) | 
    (static_cast<BitVector>(0x0) << Inherited::NextFieldId); 



FieldContainerType FragmentProgramChunkBase::_type(
    "FragmentProgramChunk",
    "ProgramChunk",
    NULL,
    reinterpret_cast<PrototypeCreateF>(&FragmentProgramChunkBase::createEmpty),
    FragmentProgramChunk::initMethod,
    NULL,
    0);

//OSG_FIELD_CONTAINER_DEF(FragmentProgramChunkBase, FragmentProgramChunkPtr)

/*------------------------------ get -----------------------------------*/

FieldContainerType &FragmentProgramChunkBase::getType(void) 
{
    return _type; 
} 

const FieldContainerType &FragmentProgramChunkBase::getType(void) const 
{
    return _type;
} 


FieldContainerPtr FragmentProgramChunkBase::shallowCopy(void) const 
{ 
    FragmentProgramChunkPtr returnValue; 

    newPtr(returnValue, dynamic_cast<const FragmentProgramChunk *>(this)); 

    return returnValue; 
}

UInt32 FragmentProgramChunkBase::getContainerSize(void) const 
{ 
    return sizeof(FragmentProgramChunk); 
}


#if !defined(OSG_FIXED_MFIELDSYNC)
void FragmentProgramChunkBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField)
{
    this->executeSyncImpl(static_cast<FragmentProgramChunkBase *>(&other),
                          whichField);
}
#else
void FragmentProgramChunkBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField,                                    const SyncInfo       &sInfo     )
{
    this->executeSyncImpl((FragmentProgramChunkBase *) &other, whichField, sInfo);
}
void FragmentProgramChunkBase::execBeginEdit(const BitVector &whichField, 
                                            UInt32     uiAspect,
                                            UInt32     uiContainerSize) 
{
    this->execBeginEditImpl(whichField, uiAspect, uiContainerSize);
}

void FragmentProgramChunkBase::onDestroyAspect(UInt32 uiId, UInt32 uiAspect)
{
    Inherited::onDestroyAspect(uiId, uiAspect);

}
#endif

/*------------------------- constructors ----------------------------------*/

#ifdef OSG_WIN32_ICL
#pragma warning (disable : 383)
#endif

FragmentProgramChunkBase::FragmentProgramChunkBase(void) :
    Inherited() 
{
}

#ifdef OSG_WIN32_ICL
#pragma warning (default : 383)
#endif

FragmentProgramChunkBase::FragmentProgramChunkBase(const FragmentProgramChunkBase &source) :
    Inherited                 (source)
{
}

/*-------------------------- destructors ----------------------------------*/

FragmentProgramChunkBase::~FragmentProgramChunkBase(void)
{
}

/*------------------------------ access -----------------------------------*/

UInt32 FragmentProgramChunkBase::getBinSize(const BitVector &whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);


    return returnValue;
}

void FragmentProgramChunkBase::copyToBin(      BinaryDataHandler &pMem,
                                  const BitVector         &whichField)
{
    Inherited::copyToBin(pMem, whichField);


}

void FragmentProgramChunkBase::copyFromBin(      BinaryDataHandler &pMem,
                                    const BitVector    &whichField)
{
    Inherited::copyFromBin(pMem, whichField);


}

#if !defined(OSG_FIXED_MFIELDSYNC)
void FragmentProgramChunkBase::executeSyncImpl(      FragmentProgramChunkBase *pOther,
                                        const BitVector         &whichField)
{

    Inherited::executeSyncImpl(pOther, whichField);


}
#else
void FragmentProgramChunkBase::executeSyncImpl(      FragmentProgramChunkBase *pOther,
                                        const BitVector         &whichField,
                                        const SyncInfo          &sInfo      )
{

    Inherited::executeSyncImpl(pOther, whichField, sInfo);



}

void FragmentProgramChunkBase::execBeginEditImpl (const BitVector &whichField, 
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
DataType FieldDataTraits<FragmentProgramChunkPtr>::_type("FragmentProgramChunkPtr", "ProgramChunkPtr");
#endif

OSG_DLLEXPORT_SFIELD_DEF1(FragmentProgramChunkPtr, OSG_SYSTEMLIB_DLLTMPLMAPPING);
OSG_DLLEXPORT_MFIELD_DEF1(FragmentProgramChunkPtr, OSG_SYSTEMLIB_DLLTMPLMAPPING);


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
    static Char8 cvsid_cpp       [] = "@(#)$Id: FCBaseTemplate_cpp.h,v 1.49 2008/06/09 07:30:44 vossg Exp $";
    static Char8 cvsid_hpp       [] = OSGFRAGMENTPROGRAMCHUNKBASE_HEADER_CVSID;
    static Char8 cvsid_inl       [] = OSGFRAGMENTPROGRAMCHUNKBASE_INLINE_CVSID;

    static Char8 cvsid_fields_hpp[] = OSGFRAGMENTPROGRAMCHUNKFIELDS_HEADER_CVSID;
}

OSG_END_NAMESPACE
