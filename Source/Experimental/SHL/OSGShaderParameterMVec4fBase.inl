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
 **     class ShaderParameterMVec4f!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <OSGConfig.h>

OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &ShaderParameterMVec4fBase::getClassType(void)
{
    return _type; 
} 

//! access the numerical type of the class
inline
OSG::UInt32 ShaderParameterMVec4fBase::getClassTypeId(void) 
{
    return _type.getId(); 
} 

//! create a new instance of the class
inline
ShaderParameterMVec4fPtr ShaderParameterMVec4fBase::create(void) 
{
    ShaderParameterMVec4fPtr fc; 

    if(getClassType().getPrototype() != OSG::NullFC) 
    {
        fc = ShaderParameterMVec4fPtr::dcast(
            getClassType().getPrototype()-> shallowCopy()); 
    }
    
    return fc; 
}

//! create an empty new instance of the class, do not copy the prototype
inline
ShaderParameterMVec4fPtr ShaderParameterMVec4fBase::createEmpty(void) 
{ 
    ShaderParameterMVec4fPtr returnValue; 
    
    newPtr(returnValue); 

    return returnValue; 
}


/*------------------------------ get -----------------------------------*/

//! Get the ShaderParameterMVec4f::_mfValue field.
inline
const MFVec4f *ShaderParameterMVec4fBase::getMFValue(void) const
{
    return &_mfValue;
}

//! Get the ShaderParameterMVec4f::_mfValue field.
inline
MFVec4f *ShaderParameterMVec4fBase::editMFValue(void)
{
    return &_mfValue;
}

#ifndef OSG_2_PREP
//! Get the ShaderParameterMVec4f::_mfValue field.
inline
MFVec4f *ShaderParameterMVec4fBase::getMFValue(void)
{
    return &_mfValue;
}
#endif



//! Get the value of the \a index element the ShaderParameterMVec4f::_mfValue field.
inline
Vec4f &ShaderParameterMVec4fBase::editValue(const UInt32 index)
{
    return _mfValue[index];
}

//! Get the value of the \a index element the ShaderParameterMVec4f::_mfValue field.
inline
const Vec4f &ShaderParameterMVec4fBase::getValue(const UInt32 index) const
{
    return _mfValue[index];
}

#ifndef OSG_2_PREP
//! Get the value of the \a index element the ShaderParameterMVec4f::_mfValue field.
inline
Vec4f &ShaderParameterMVec4fBase::getValue(const UInt32 index)
{
    return _mfValue[index];
}

//! Get the ShaderParameterMVec4f::_mfValue field.
inline
MFVec4f &ShaderParameterMVec4fBase::getValue(void)
{
    return _mfValue;
}

//! Get the ShaderParameterMVec4f::_mfValue field.
inline
const MFVec4f &ShaderParameterMVec4fBase::getValue(void) const
{
    return _mfValue;
}

#endif

OSG_END_NAMESPACE

#define OSGSHADERPARAMETERMVEC4FBASE_INLINE_CVSID "@(#)$Id: OSGShaderParameterMVec4fBase.inl,v 1.4 2008/06/09 12:28:06 vossg Exp $"

