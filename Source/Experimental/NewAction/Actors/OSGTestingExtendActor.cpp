/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *             Copyright (C) 2000-2002 by the OpenSG Forum                   *
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

//----------------------------------------------------------------------------
//    Includes
//----------------------------------------------------------------------------

#include "OSGTestingExtendActor.h"

OSG_USING_NAMESPACE

//----------------------------------------------------------------------------
//    Create
//----------------------------------------------------------------------------

/*! Create a new instance of this actor.
 */

TestingExtendActor *
TestingExtendActor::create(void)
{
    return new TestingExtendActor();
}

//----------------------------------------------------------------------------
//    Destructor
//----------------------------------------------------------------------------

/*! Destructor.
 */

TestingExtendActor::~TestingExtendActor(void)
{
}

//----------------------------------------------------------------------------
//    Enter/Leave
//----------------------------------------------------------------------------



//----------------------------------------------------------------------------
//    Constructors
//----------------------------------------------------------------------------

/*! Constructor.
 */

TestingExtendActor::TestingExtendActor(void)
    : Inherited()
{
}

/*------------------------------------------------------------------------*/
/*    cvs id's                                                            */

#ifdef OSG_SGI_CC
#pragma set woff 1174
#endif

#ifdef OSG_LINUX_ICC
#pragma warning(disable : 177)
#endif

namespace
{
    static Char8 cvsid_cpp     [] = "@(#)$Id:";
    static Char8 cvsid_hpp     [] = OSGTESTINGEXTENDACTOR_HEADER_CVSID;
    static Char8 cvsid_inl     [] = OSGTESTINGEXTENDACTOR_INLINE_CVSID;
}


#ifdef OSG_LINUX_ICC
#pragma warning(enable : 177)
#endif

#ifdef OSG_SGI_CC
#pragma reset woff 1174
#endif
