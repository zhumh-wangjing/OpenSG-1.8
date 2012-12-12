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
 **     class TextureBackground!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <OSGConfig.h>

OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &TextureBackgroundBase::getClassType(void)
{
    return _type; 
} 

//! access the numerical type of the class
inline
OSG::UInt32 TextureBackgroundBase::getClassTypeId(void) 
{
    return _type.getId(); 
} 

//! create a new instance of the class
inline
TextureBackgroundPtr TextureBackgroundBase::create(void) 
{
    TextureBackgroundPtr fc; 

    if(getClassType().getPrototype() != OSG::NullFC) 
    {
        fc = TextureBackgroundPtr::dcast(
            getClassType().getPrototype()-> shallowCopy()); 
    }
    
    return fc; 
}

//! create an empty new instance of the class, do not copy the prototype
inline
TextureBackgroundPtr TextureBackgroundBase::createEmpty(void) 
{ 
    TextureBackgroundPtr returnValue; 
    
    newPtr(returnValue); 

    return returnValue; 
}


/*------------------------------ get -----------------------------------*/

//! Get the TextureBackground::_sfColor field.
inline
const SFColor4f *TextureBackgroundBase::getSFColor(void) const
{
    return &_sfColor;
}

//! Get the TextureBackground::_sfColor field.
inline
SFColor4f *TextureBackgroundBase::editSFColor(void)
{
    return &_sfColor;
}

#ifndef OSG_2_PREP
//! Get the TextureBackground::_sfColor field.
inline
SFColor4f *TextureBackgroundBase::getSFColor(void)
{
    return &_sfColor;
}
#endif

//! Get the TextureBackground::_sfTexture field.
inline
const SFTextureChunkPtr *TextureBackgroundBase::getSFTexture(void) const
{
    return &_sfTexture;
}

//! Get the TextureBackground::_sfTexture field.
inline
SFTextureChunkPtr *TextureBackgroundBase::editSFTexture(void)
{
    return &_sfTexture;
}

#ifndef OSG_2_PREP
//! Get the TextureBackground::_sfTexture field.
inline
SFTextureChunkPtr *TextureBackgroundBase::getSFTexture(void)
{
    return &_sfTexture;
}
#endif

//! Get the TextureBackground::_mfTexCoords field.
inline
const MFPnt2f *TextureBackgroundBase::getMFTexCoords(void) const
{
    return &_mfTexCoords;
}

//! Get the TextureBackground::_mfTexCoords field.
inline
MFPnt2f *TextureBackgroundBase::editMFTexCoords(void)
{
    return &_mfTexCoords;
}

#ifndef OSG_2_PREP
//! Get the TextureBackground::_mfTexCoords field.
inline
MFPnt2f *TextureBackgroundBase::getMFTexCoords(void)
{
    return &_mfTexCoords;
}
#endif

//! Get the TextureBackground::_sfRadialDistortion field.
inline
const SFReal32 *TextureBackgroundBase::getSFRadialDistortion(void) const
{
    return &_sfRadialDistortion;
}

//! Get the TextureBackground::_sfRadialDistortion field.
inline
SFReal32 *TextureBackgroundBase::editSFRadialDistortion(void)
{
    return &_sfRadialDistortion;
}

#ifndef OSG_2_PREP
//! Get the TextureBackground::_sfRadialDistortion field.
inline
SFReal32 *TextureBackgroundBase::getSFRadialDistortion(void)
{
    return &_sfRadialDistortion;
}
#endif

//! Get the TextureBackground::_sfCenterOfDistortion field.
inline
const SFVec2f *TextureBackgroundBase::getSFCenterOfDistortion(void) const
{
    return &_sfCenterOfDistortion;
}

//! Get the TextureBackground::_sfCenterOfDistortion field.
inline
SFVec2f *TextureBackgroundBase::editSFCenterOfDistortion(void)
{
    return &_sfCenterOfDistortion;
}

#ifndef OSG_2_PREP
//! Get the TextureBackground::_sfCenterOfDistortion field.
inline
SFVec2f *TextureBackgroundBase::getSFCenterOfDistortion(void)
{
    return &_sfCenterOfDistortion;
}
#endif

//! Get the TextureBackground::_sfHor field.
inline
const SFUInt16 *TextureBackgroundBase::getSFHor(void) const
{
    return &_sfHor;
}

//! Get the TextureBackground::_sfHor field.
inline
SFUInt16 *TextureBackgroundBase::editSFHor(void)
{
    return &_sfHor;
}

#ifndef OSG_2_PREP
//! Get the TextureBackground::_sfHor field.
inline
SFUInt16 *TextureBackgroundBase::getSFHor(void)
{
    return &_sfHor;
}
#endif

//! Get the TextureBackground::_sfVert field.
inline
const SFUInt16 *TextureBackgroundBase::getSFVert(void) const
{
    return &_sfVert;
}

//! Get the TextureBackground::_sfVert field.
inline
SFUInt16 *TextureBackgroundBase::editSFVert(void)
{
    return &_sfVert;
}

#ifndef OSG_2_PREP
//! Get the TextureBackground::_sfVert field.
inline
SFUInt16 *TextureBackgroundBase::getSFVert(void)
{
    return &_sfVert;
}
#endif

//! Get the TextureBackground::_sfClearStencilBit field.
inline
const SFInt32 *TextureBackgroundBase::getSFClearStencilBit(void) const
{
    return &_sfClearStencilBit;
}

//! Get the TextureBackground::_sfClearStencilBit field.
inline
SFInt32 *TextureBackgroundBase::editSFClearStencilBit(void)
{
    return &_sfClearStencilBit;
}

#ifndef OSG_2_PREP
//! Get the TextureBackground::_sfClearStencilBit field.
inline
SFInt32 *TextureBackgroundBase::getSFClearStencilBit(void)
{
    return &_sfClearStencilBit;
}
#endif


//! Get the value of the TextureBackground::_sfColor field.
inline
Color4f &TextureBackgroundBase::editColor(void)
{
    return _sfColor.getValue();
}

//! Get the value of the TextureBackground::_sfColor field.
inline
const Color4f &TextureBackgroundBase::getColor(void) const
{
    return _sfColor.getValue();
}

#ifndef OSG_2_PREP
//! Get the value of the TextureBackground::_sfColor field.
inline
Color4f &TextureBackgroundBase::getColor(void)
{
    return _sfColor.getValue();
}
#endif

//! Set the value of the TextureBackground::_sfColor field.
inline
void TextureBackgroundBase::setColor(const Color4f &value)
{
    _sfColor.setValue(value);
}

//! Get the value of the TextureBackground::_sfTexture field.
inline
TextureChunkPtr &TextureBackgroundBase::editTexture(void)
{
    return _sfTexture.getValue();
}

//! Get the value of the TextureBackground::_sfTexture field.
inline
const TextureChunkPtr &TextureBackgroundBase::getTexture(void) const
{
    return _sfTexture.getValue();
}

#ifndef OSG_2_PREP
//! Get the value of the TextureBackground::_sfTexture field.
inline
TextureChunkPtr &TextureBackgroundBase::getTexture(void)
{
    return _sfTexture.getValue();
}
#endif

//! Set the value of the TextureBackground::_sfTexture field.
inline
void TextureBackgroundBase::setTexture(const TextureChunkPtr &value)
{
    _sfTexture.setValue(value);
}

//! Get the value of the TextureBackground::_sfRadialDistortion field.
inline
Real32 &TextureBackgroundBase::editRadialDistortion(void)
{
    return _sfRadialDistortion.getValue();
}

//! Get the value of the TextureBackground::_sfRadialDistortion field.
inline
const Real32 &TextureBackgroundBase::getRadialDistortion(void) const
{
    return _sfRadialDistortion.getValue();
}

#ifndef OSG_2_PREP
//! Get the value of the TextureBackground::_sfRadialDistortion field.
inline
Real32 &TextureBackgroundBase::getRadialDistortion(void)
{
    return _sfRadialDistortion.getValue();
}
#endif

//! Set the value of the TextureBackground::_sfRadialDistortion field.
inline
void TextureBackgroundBase::setRadialDistortion(const Real32 &value)
{
    _sfRadialDistortion.setValue(value);
}

//! Get the value of the TextureBackground::_sfCenterOfDistortion field.
inline
Vec2f &TextureBackgroundBase::editCenterOfDistortion(void)
{
    return _sfCenterOfDistortion.getValue();
}

//! Get the value of the TextureBackground::_sfCenterOfDistortion field.
inline
const Vec2f &TextureBackgroundBase::getCenterOfDistortion(void) const
{
    return _sfCenterOfDistortion.getValue();
}

#ifndef OSG_2_PREP
//! Get the value of the TextureBackground::_sfCenterOfDistortion field.
inline
Vec2f &TextureBackgroundBase::getCenterOfDistortion(void)
{
    return _sfCenterOfDistortion.getValue();
}
#endif

//! Set the value of the TextureBackground::_sfCenterOfDistortion field.
inline
void TextureBackgroundBase::setCenterOfDistortion(const Vec2f &value)
{
    _sfCenterOfDistortion.setValue(value);
}

//! Get the value of the TextureBackground::_sfHor field.
inline
UInt16 &TextureBackgroundBase::editHor(void)
{
    return _sfHor.getValue();
}

//! Get the value of the TextureBackground::_sfHor field.
inline
const UInt16 &TextureBackgroundBase::getHor(void) const
{
    return _sfHor.getValue();
}

#ifndef OSG_2_PREP
//! Get the value of the TextureBackground::_sfHor field.
inline
UInt16 &TextureBackgroundBase::getHor(void)
{
    return _sfHor.getValue();
}
#endif

//! Set the value of the TextureBackground::_sfHor field.
inline
void TextureBackgroundBase::setHor(const UInt16 &value)
{
    _sfHor.setValue(value);
}

//! Get the value of the TextureBackground::_sfVert field.
inline
UInt16 &TextureBackgroundBase::editVert(void)
{
    return _sfVert.getValue();
}

//! Get the value of the TextureBackground::_sfVert field.
inline
const UInt16 &TextureBackgroundBase::getVert(void) const
{
    return _sfVert.getValue();
}

#ifndef OSG_2_PREP
//! Get the value of the TextureBackground::_sfVert field.
inline
UInt16 &TextureBackgroundBase::getVert(void)
{
    return _sfVert.getValue();
}
#endif

//! Set the value of the TextureBackground::_sfVert field.
inline
void TextureBackgroundBase::setVert(const UInt16 &value)
{
    _sfVert.setValue(value);
}

//! Get the value of the TextureBackground::_sfClearStencilBit field.
inline
Int32 &TextureBackgroundBase::editClearStencilBit(void)
{
    return _sfClearStencilBit.getValue();
}

//! Get the value of the TextureBackground::_sfClearStencilBit field.
inline
const Int32 &TextureBackgroundBase::getClearStencilBit(void) const
{
    return _sfClearStencilBit.getValue();
}

#ifndef OSG_2_PREP
//! Get the value of the TextureBackground::_sfClearStencilBit field.
inline
Int32 &TextureBackgroundBase::getClearStencilBit(void)
{
    return _sfClearStencilBit.getValue();
}
#endif

//! Set the value of the TextureBackground::_sfClearStencilBit field.
inline
void TextureBackgroundBase::setClearStencilBit(const Int32 &value)
{
    _sfClearStencilBit.setValue(value);
}


//! Get the value of the \a index element the TextureBackground::_mfTexCoords field.
inline
Pnt2f &TextureBackgroundBase::editTexCoords(const UInt32 index)
{
    return _mfTexCoords[index];
}

//! Get the value of the \a index element the TextureBackground::_mfTexCoords field.
inline
const Pnt2f &TextureBackgroundBase::getTexCoords(const UInt32 index) const
{
    return _mfTexCoords[index];
}

#ifndef OSG_2_PREP
//! Get the value of the \a index element the TextureBackground::_mfTexCoords field.
inline
Pnt2f &TextureBackgroundBase::getTexCoords(const UInt32 index)
{
    return _mfTexCoords[index];
}

//! Get the TextureBackground::_mfTexCoords field.
inline
MFPnt2f &TextureBackgroundBase::getTexCoords(void)
{
    return _mfTexCoords;
}

//! Get the TextureBackground::_mfTexCoords field.
inline
const MFPnt2f &TextureBackgroundBase::getTexCoords(void) const
{
    return _mfTexCoords;
}

#endif

OSG_END_NAMESPACE

#define OSGTEXTUREBACKGROUNDBASE_INLINE_CVSID "@(#)$Id: OSGTextureBackgroundBase.inl,v 1.10 2008/06/09 12:28:24 vossg Exp $"
