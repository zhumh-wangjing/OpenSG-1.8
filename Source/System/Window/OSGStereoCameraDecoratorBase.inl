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
 **     class StereoCameraDecorator!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <OSGConfig.h>

OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &StereoCameraDecoratorBase::getClassType(void)
{
    return _type; 
} 

//! access the numerical type of the class
inline
OSG::UInt32 StereoCameraDecoratorBase::getClassTypeId(void) 
{
    return _type.getId(); 
} 


/*------------------------------ get -----------------------------------*/

//! Get the StereoCameraDecorator::_sfLeftEye field.
inline
const SFBool *StereoCameraDecoratorBase::getSFLeftEye(void) const
{
    return &_sfLeftEye;
}

//! Get the StereoCameraDecorator::_sfLeftEye field.
inline
SFBool *StereoCameraDecoratorBase::editSFLeftEye(void)
{
    return &_sfLeftEye;
}

#ifndef OSG_2_PREP
//! Get the StereoCameraDecorator::_sfLeftEye field.
inline
SFBool *StereoCameraDecoratorBase::getSFLeftEye(void)
{
    return &_sfLeftEye;
}
#endif

//! Get the StereoCameraDecorator::_sfEyeSeparation field.
inline
const SFReal32 *StereoCameraDecoratorBase::getSFEyeSeparation(void) const
{
    return &_sfEyeSeparation;
}

//! Get the StereoCameraDecorator::_sfEyeSeparation field.
inline
SFReal32 *StereoCameraDecoratorBase::editSFEyeSeparation(void)
{
    return &_sfEyeSeparation;
}

#ifndef OSG_2_PREP
//! Get the StereoCameraDecorator::_sfEyeSeparation field.
inline
SFReal32 *StereoCameraDecoratorBase::getSFEyeSeparation(void)
{
    return &_sfEyeSeparation;
}
#endif


//! Get the value of the StereoCameraDecorator::_sfLeftEye field.
inline
bool &StereoCameraDecoratorBase::editLeftEye(void)
{
    return _sfLeftEye.getValue();
}

//! Get the value of the StereoCameraDecorator::_sfLeftEye field.
inline
const bool &StereoCameraDecoratorBase::getLeftEye(void) const
{
    return _sfLeftEye.getValue();
}

#ifndef OSG_2_PREP
//! Get the value of the StereoCameraDecorator::_sfLeftEye field.
inline
bool &StereoCameraDecoratorBase::getLeftEye(void)
{
    return _sfLeftEye.getValue();
}
#endif

//! Set the value of the StereoCameraDecorator::_sfLeftEye field.
inline
void StereoCameraDecoratorBase::setLeftEye(const bool &value)
{
    _sfLeftEye.setValue(value);
}

//! Get the value of the StereoCameraDecorator::_sfEyeSeparation field.
inline
Real32 &StereoCameraDecoratorBase::editEyeSeparation(void)
{
    return _sfEyeSeparation.getValue();
}

//! Get the value of the StereoCameraDecorator::_sfEyeSeparation field.
inline
const Real32 &StereoCameraDecoratorBase::getEyeSeparation(void) const
{
    return _sfEyeSeparation.getValue();
}

#ifndef OSG_2_PREP
//! Get the value of the StereoCameraDecorator::_sfEyeSeparation field.
inline
Real32 &StereoCameraDecoratorBase::getEyeSeparation(void)
{
    return _sfEyeSeparation.getValue();
}
#endif

//! Set the value of the StereoCameraDecorator::_sfEyeSeparation field.
inline
void StereoCameraDecoratorBase::setEyeSeparation(const Real32 &value)
{
    _sfEyeSeparation.setValue(value);
}


OSG_END_NAMESPACE

#define OSGSTEREOCAMERADECORATORBASE_INLINE_CVSID "@(#)$Id: FCBaseTemplate_inl.h,v 1.21 2008/06/09 07:30:44 vossg Exp $"

