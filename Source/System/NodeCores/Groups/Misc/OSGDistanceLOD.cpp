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

#include <stdlib.h>
#include <stdio.h>

#include <OSGConfig.h>

#include <OSGAction.h>
#include <OSGDrawAction.h>
#include <OSGRenderAction.h>
#include <OSGIntersectAction.h>
#include <OSGCamera.h>

//just for debug
#include <iostream>
//just for debug

#include "OSGDistanceLOD.h"

OSG_USING_NAMESPACE

/*! \class osg::DistanceLOD

  This Node manages the different levels of detail available for a Geometry
  and decides which one should be rendered, according to the distance from the
  current camera. The details of the selection process are taken from VRML97
  standard. 
  
  The node chooses which child to render based on the range values in the Range
  multi-field and the current distance of the camera from the object.  The children
  should be ordered from the highest level of detail to the lowest level of detail.
  The range values specify the distances at which to switch between the different
  children.
  
  The center field is a translation offset in the local coordinate system that
  specified the center of the object for distance calculations.  In order to
  calculate which level to display, first the distance is calculate from the viewpoint
  to the center point of the LOD node (which corresponding transformations).  If
  the distance is less than the first range value, then the first LOD is drawn. If it
  is between the first and the second values, then the second LOD is drawn, and so on.

\example Setting up a osg::DistanceLOD

Here is an example of setting up an lod core with a center and a range.
You would also need to add children for the 4 LODs.

\code
DistanceLOD lod = DistanceLOD::create();
beginEditCP(lod);
    // this is supposed to be the center of the LOD model,
    // that is, this is the point the distance is measured from
    lod->setCenter(12,1,5);
    // now we add the distances when models will change
    lod->getMFRange()->push_back(6.0);
    lod->getMFRange()->push_back(12.0);
    lod->getMFRange()->push_back(24.0);    
endEditCP(lod);
\endcode

\endexample

*/

/*-------------------------------------------------------------------------*/
/*                               Sync                                      */

void DistanceLOD::changed(BitVector whichField, UInt32 origin)
{
    Inherited::changed(whichField, origin);
}

/*-------------------------------------------------------------------------*/
/*                               Dump                                      */

void DistanceLOD::dump(      UInt32    OSG_CHECK_ARG(uiIndent), 
                       const BitVector OSG_CHECK_ARG(bvFlags )) const
{
    SLOG << "Dump DistanceLOD NI" << std::endl;
}

/*-------------------------------------------------------------------------*/
/*                            Constructors                                 */

DistanceLOD::DistanceLOD(void) :
    Inherited(),
	_lastDist(0)
{
}

DistanceLOD::DistanceLOD(const DistanceLOD &source) :
    Inherited(source),
	_lastDist(source._lastDist)
{
}

/*-------------------------------------------------------------------------*/
/*                             Destructor                                  */

DistanceLOD::~DistanceLOD(void)
{
}

/*-------------------------------------------------------------------------*/
/*                                Draw                                     */

Action::ResultE DistanceLOD::draw(Action *action)
{
	DrawActionBase *da = dynamic_cast<DrawActionBase *>(action);
	RenderAction   *ra = dynamic_cast<RenderAction *>  (action);
	
    action->useNodeList();

    UInt32 numLevels = action->getNNodes();
    Int32 index = -1;
    
    if (numLevels == 0)
    {
    	// update index field for being externally accessible
    	if (index != getIndex() && (!ra || !ra->getEffectsPass()))
    	{
			beginEditCP(getPtr(), IndexFieldMask);
				setIndex(index);
			endEditCP  (getPtr(), IndexFieldMask);
		}
		
        return Action::Continue;
    }

    const MFReal32 &range = (*getMFRange());
    UInt32 numRanges = range.size();
	
    if (numRanges == 0)
    {
        index = 0;
    }
    else
    {
        Real32 dist = 0;
		
        if (ra != NULL)
		{
			if (!ra->getEffectsPass())
				dist = calcDistance(da, ra->top_matrix());
			else
				dist = _lastDist;
		}
        else
            dist = calcDistance(da, da->getActNode()->getToWorld());

        if (numRanges >= numLevels)
            numRanges = numLevels - 1;

        if(numRanges == 0)
        {
            index = 0;
        }
        else if (dist >= range[numRanges - 1])
        {
            index = numRanges;
        }
        else
        {
            for (index = 0; index < numRanges; ++index)
            {
                if (dist < range[index])
                    break;
            }
        }
    }
    
    // update index field for being externally accessible
	if (index != getIndex() && (!ra || !ra->getEffectsPass()))
	{
		beginEditCP(getPtr(), IndexFieldMask);
			setIndex(index);
		endEditCP  (getPtr(), IndexFieldMask);
	}

    const NodePtr nodePtr = action->getNode(index);
    
    if(da->isVisible(getCPtr(nodePtr)))
    {
        da->addNode(nodePtr);
    }

    return Action::Continue;
}

/*-------------------------------------------------------------------------*/
/*                            Calc Distance                                */

Real32 DistanceLOD::calcDistance(DrawActionBase *pAction, 
								 const Matrix &mToWorld)
{
    Matrix m;
    m.invertFrom(mToWorld);
    m.mult(pAction->getCameraToWorld());
    Pnt3f eyepos;
    m.mult(eyepos, eyepos);
	
	_lastDist = eyepos.dist(getCenter());

    return _lastDist;
}

/*-------------------------------------------------------------------------*/
/*                             Intersect                                   */

Action::ResultE DistanceLOD::intersect(Action *action)
{
    IntersectAction *ia  = dynamic_cast<IntersectAction *>(action);
    
#ifndef OSG_2_PREP
    const DynamicVolume &vol = ia->getActNode()->getVolume();
#else
    const BoxVolume     &vol = ia->getActNode()->getVolume();
#endif
    
    UInt32 numLevels = action->getNNodes();
    
    // early out: no children or lod set missed, cannot hit anything
    if (numLevels == 0 ||
    	vol.isValid() && !vol.intersect(ia->getLine()))
    {
        return Action::Skip;
    }

    const MFReal32 &range = (*getMFRange());
    UInt32 numRanges = range.size();
    UInt32 index = 0;
	
    if (numRanges > 0)
    {
        if (numRanges >= numLevels)
            numRanges = numLevels - 1;

        if (numRanges == 0)
        {
            index = 0;
        }
        else if (_lastDist >= range[numRanges - 1])
        {
            index = numRanges;
        }
        else
        {
            for (index = 0; index < numRanges; ++index)
            {
                if (_lastDist < range[index])
                    break;
            }
        }
    }
    
    const NodePtr nodePtr = action->getNode(index);
    
    ia->addNode(nodePtr);

    return Action::Continue;
}

/*-------------------------------------------------------------------------*/
/*                               Init                                      */

void DistanceLOD::initMethod (void)
{
    DrawAction::registerEnterDefault( 
        getClassType(),
        osgTypedMethodFunctor2BaseCPtrRef<
            Action::ResultE,
            DistanceLODPtr  ,
            CNodePtr        ,
            Action         *>(&DistanceLOD::draw));

    RenderAction::registerEnterDefault(
        getClassType(),
        osgTypedMethodFunctor2BaseCPtrRef<
            Action::ResultE,
            DistanceLODPtr  ,
            CNodePtr        ,
            Action         *>(&DistanceLOD::draw));
	
	IntersectAction::registerEnterDefault( 
        getClassType(),
        osgTypedMethodFunctor2BaseCPtrRef<Action::ResultE,
            DistanceLODPtr  ,
            CNodePtr        ,
            Action         *>(&DistanceLOD::intersect));
}


/*-------------------------------------------------------------------------*/
/*                              cvs id's                                   */

#ifdef __sgi
#pragma set woff 1174
#endif

#ifdef OSG_LINUX_ICC
#pragma warning( disable : 177 )
#endif

namespace
{
    static Char8 cvsid_cpp[] = "@(#)$Id: OSGDistanceLOD.cpp,v 1.22 2002/06/30 05:04:22 vossg Exp $";
    static Char8 cvsid_hpp[] = OSGDISTANCELOD_HEADER_CVSID;
    static Char8 cvsid_inl[] = OSGDISTANCELOD_INLINE_CVSID;
}

    

