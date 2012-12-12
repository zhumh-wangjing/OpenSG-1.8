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
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGCOREGLWINDOWFIELDS_H_
#define _OSGCOREGLWINDOWFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include <OSGConfig.h>

#include <OSGFieldContainerPtr.h>
#include <OSGNodeCoreFieldDataType.h>
#include <OSGWindowCoreGLDef.h>

#include <OSGWindowFields.h>

OSG_BEGIN_NAMESPACE

class CoreGLWindow;

#if !defined(OSG_DO_DOC)   // created as a dummy class, remove to prevent doubles
//! CoreGLWindowPtr

typedef FCPtr<WindowPtr, CoreGLWindow> CoreGLWindowPtr;

#endif

#if !defined(OSG_DO_DOC) || (OSG_DOC_LEVEL >= 3)
/*! \ingroup GrpWindowCoreGLFieldTraits
 */
#if !defined(OSG_DOC_DEV_TRAITS)
/*! \hideinhierarchy */
#endif

template <>
struct FieldDataTraits<CoreGLWindowPtr> : 
    public FieldTraitsRecurseMapper<CoreGLWindowPtr, true>
{
    static DataType             _type;                       

    enum                        { StringConvertable = 0x00 };
    enum                        { bHasParent        = 0x01 };

    static DataType   &getType (void) { return _type;        }

    static const char *getSName(void) { return "SFCoreGLWindowPtr"; }
    static const char *getMName(void) { return "MFCoreGLWindowPtr"; }
};

#if !defined(OSG_DOC_DEV_TRAITS)
/*! \class  FieldTraitsRecurseMapper<CoreGLWindowPtr, true>
    \hideinhierarchy
 */
#endif

#endif // !defined(OSG_DO_DOC) || (OSG_DOC_LEVEL >= 3)


#if !defined(OSG_DO_DOC) || defined(OSG_DOC_FIELD_TYPEDEFS)
/*! \ingroup GrpWindowCoreGLFieldSingle */

typedef SField<CoreGLWindowPtr> SFCoreGLWindowPtr;
#endif

#ifndef OSG_COMPILECOREGLWINDOWINST
OSG_DLLEXPORT_DECL1(SField, CoreGLWindowPtr, OSG_WINDOWCOREGLLIB_DLLTMPLMAPPING)
#endif

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_FIELD_TYPEDEFS)
/*! \ingroup GrpWindowCoreGLFieldMulti */

typedef MField<CoreGLWindowPtr> MFCoreGLWindowPtr;
#endif

#ifndef OSG_COMPILECOREGLWINDOWINST
OSG_DLLEXPORT_DECL1(MField, CoreGLWindowPtr, OSG_WINDOWCOREGLLIB_DLLTMPLMAPPING)
#endif

OSG_END_NAMESPACE

#define OSGCOREGLWINDOWFIELDS_HEADER_CVSID "@(#)$Id: OSGCoreGLWindowFields.h,v 1.4 2008/06/09 12:28:27 vossg Exp $"

#endif /* _OSGCOREGLWINDOWFIELDS_H_ */