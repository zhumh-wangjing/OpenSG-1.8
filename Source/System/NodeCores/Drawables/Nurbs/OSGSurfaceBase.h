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
 **     class Surface
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGSURFACEBASE_H_
#define _OSGSURFACEBASE_H_
#ifdef __sgi
#pragma once
#endif


#include <OSGConfig.h>
#include <OSGSystemDef.h>

#include <OSGBaseTypes.h>
#include <OSGRefPtr.h>
#include <OSGCoredNodePtr.h>

#include <OSGGeometry.h> // Parent

#include <OSGUInt32Fields.h> // DimU type
#include <OSGUInt32Fields.h> // DimV type
#include <OSGReal32Fields.h> // KnotsU type
#include <OSGReal32Fields.h> // KnotsV type
#include <OSGGeoPositionsFields.h> // ControlPoints type
#include <OSGReal32Fields.h> // Error type
#include <OSGUInt32Fields.h> // NumCurves type
#include <OSGUInt32Fields.h> // KnotLengths type
#include <OSGUInt32Fields.h> // Dimensions type
#include <OSGPnt3fFields.h> // CurveControlPoints type
#include <OSGReal32Fields.h> // Knots type
#include <OSGUInt32Fields.h> // CurvesPerLoop type
#include <OSGBoolFields.h> // IsDelaunay type
#include <OSGGeoTexCoordsFields.h> // TextureControlPoints type
#include <OSGUInt32Fields.h> // DirtyMask type
#include <OSGInt32Fields.h> // SurfaceGLId type

#include <OSGSurfaceFields.h>

OSG_BEGIN_NAMESPACE

class Surface;
class BinaryDataHandler;

//! \brief Surface Base Class.

class OSG_SYSTEMLIB_DLLMAPPING SurfaceBase : public Geometry
{
  private:

    typedef Geometry    Inherited;

    /*==========================  PUBLIC  =================================*/
  public:

    typedef SurfacePtr  Ptr;

    enum
    {
        DimUFieldId                 = Inherited::NextFieldId,
        DimVFieldId                 = DimUFieldId                 + 1,
        KnotsUFieldId               = DimVFieldId                 + 1,
        KnotsVFieldId               = KnotsUFieldId               + 1,
        ControlPointsFieldId        = KnotsVFieldId               + 1,
        ErrorFieldId                = ControlPointsFieldId        + 1,
        NumCurvesFieldId            = ErrorFieldId                + 1,
        KnotLengthsFieldId          = NumCurvesFieldId            + 1,
        DimensionsFieldId           = KnotLengthsFieldId          + 1,
        CurveControlPointsFieldId   = DimensionsFieldId           + 1,
        KnotsFieldId                = CurveControlPointsFieldId   + 1,
        CurvesPerLoopFieldId        = KnotsFieldId                + 1,
        IsDelaunayFieldId           = CurvesPerLoopFieldId        + 1,
        TextureControlPointsFieldId = IsDelaunayFieldId           + 1,
        DirtyMaskFieldId            = TextureControlPointsFieldId + 1,
        SurfaceGLIdFieldId          = DirtyMaskFieldId            + 1,
        NextFieldId                 = SurfaceGLIdFieldId          + 1
    };

    static const OSG::BitVector DimUFieldMask;
    static const OSG::BitVector DimVFieldMask;
    static const OSG::BitVector KnotsUFieldMask;
    static const OSG::BitVector KnotsVFieldMask;
    static const OSG::BitVector ControlPointsFieldMask;
    static const OSG::BitVector ErrorFieldMask;
    static const OSG::BitVector NumCurvesFieldMask;
    static const OSG::BitVector KnotLengthsFieldMask;
    static const OSG::BitVector DimensionsFieldMask;
    static const OSG::BitVector CurveControlPointsFieldMask;
    static const OSG::BitVector KnotsFieldMask;
    static const OSG::BitVector CurvesPerLoopFieldMask;
    static const OSG::BitVector IsDelaunayFieldMask;
    static const OSG::BitVector TextureControlPointsFieldMask;
    static const OSG::BitVector DirtyMaskFieldMask;
    static const OSG::BitVector SurfaceGLIdFieldMask;


    static const OSG::BitVector MTInfluenceMask;

    /*---------------------------------------------------------------------*/
    /*! \name                    Class Get                                 */
    /*! \{                                                                 */

    static        FieldContainerType &getClassType    (void); 
    static        UInt32              getClassTypeId  (void); 

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                FieldContainer Get                            */
    /*! \{                                                                 */

    virtual       FieldContainerType &getType  (void); 
    virtual const FieldContainerType &getType  (void) const; 

    virtual       UInt32              getContainerSize(void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Get                                 */
    /*! \{                                                                 */


           SFUInt32            *editSFDimU           (void);
     const SFUInt32            *getSFDimU           (void) const;
#ifndef OSG_2_PREP
           SFUInt32            *getSFDimU           (void);
#endif

           SFUInt32            *editSFDimV           (void);
     const SFUInt32            *getSFDimV           (void) const;
#ifndef OSG_2_PREP
           SFUInt32            *getSFDimV           (void);
#endif

           MFReal32            *editMFKnotsU         (void);
     const MFReal32            *getMFKnotsU         (void) const;
#ifndef OSG_2_PREP
           MFReal32            *getMFKnotsU         (void);
#endif

           MFReal32            *editMFKnotsV         (void);
     const MFReal32            *getMFKnotsV         (void) const;
#ifndef OSG_2_PREP
           MFReal32            *getMFKnotsV         (void);
#endif

           SFGeoPositionsPtr   *editSFControlPoints  (void);
     const SFGeoPositionsPtr   *getSFControlPoints  (void) const;
#ifndef OSG_2_PREP
           SFGeoPositionsPtr   *getSFControlPoints  (void);
#endif

           SFReal32            *editSFError          (void);
     const SFReal32            *getSFError          (void) const;
#ifndef OSG_2_PREP
           SFReal32            *getSFError          (void);
#endif

           SFUInt32            *editSFNumCurves      (void);
     const SFUInt32            *getSFNumCurves      (void) const;
#ifndef OSG_2_PREP
           SFUInt32            *getSFNumCurves      (void);
#endif

           MFUInt32            *editMFKnotLengths    (void);
     const MFUInt32            *getMFKnotLengths    (void) const;
#ifndef OSG_2_PREP
           MFUInt32            *getMFKnotLengths    (void);
#endif

           MFUInt32            *editMFDimensions     (void);
     const MFUInt32            *getMFDimensions     (void) const;
#ifndef OSG_2_PREP
           MFUInt32            *getMFDimensions     (void);
#endif

           MFPnt3f             *editMFCurveControlPoints(void);
     const MFPnt3f             *getMFCurveControlPoints(void) const;
#ifndef OSG_2_PREP
           MFPnt3f             *getMFCurveControlPoints(void);
#endif

           MFReal32            *editMFKnots          (void);
     const MFReal32            *getMFKnots          (void) const;
#ifndef OSG_2_PREP
           MFReal32            *getMFKnots          (void);
#endif

           MFUInt32            *editMFCurvesPerLoop  (void);
     const MFUInt32            *getMFCurvesPerLoop  (void) const;
#ifndef OSG_2_PREP
           MFUInt32            *getMFCurvesPerLoop  (void);
#endif

           SFBool              *editSFIsDelaunay     (void);
     const SFBool              *getSFIsDelaunay     (void) const;
#ifndef OSG_2_PREP
           SFBool              *getSFIsDelaunay     (void);
#endif

           SFGeoTexCoordsPtr   *editSFTextureControlPoints(void);
     const SFGeoTexCoordsPtr   *getSFTextureControlPoints(void) const;
#ifndef OSG_2_PREP
           SFGeoTexCoordsPtr   *getSFTextureControlPoints(void);
#endif

           SFUInt32            *editSFDirtyMask      (void);
     const SFUInt32            *getSFDirtyMask      (void) const;
#ifndef OSG_2_PREP
           SFUInt32            *getSFDirtyMask      (void);
#endif

           SFInt32             *editSFSurfaceGLId    (void);
     const SFInt32             *getSFSurfaceGLId    (void) const;
#ifndef OSG_2_PREP
           SFInt32             *getSFSurfaceGLId    (void);
#endif


           UInt32              &editDimU           (void);
     const UInt32              &getDimU           (void) const;
#ifndef OSG_2_PREP
           UInt32              &getDimU           (void);
#endif

           UInt32              &editDimV           (void);
     const UInt32              &getDimV           (void) const;
#ifndef OSG_2_PREP
           UInt32              &getDimV           (void);
#endif

           GeoPositionsPtr     &editControlPoints  (void);
     const GeoPositionsPtr     &getControlPoints  (void) const;
#ifndef OSG_2_PREP
           GeoPositionsPtr     &getControlPoints  (void);
#endif

           Real32              &editError          (void);
     const Real32              &getError          (void) const;
#ifndef OSG_2_PREP
           Real32              &getError          (void);
#endif

           UInt32              &editNumCurves      (void);
     const UInt32              &getNumCurves      (void) const;
#ifndef OSG_2_PREP
           UInt32              &getNumCurves      (void);
#endif

           bool                &editIsDelaunay     (void);
     const bool                &getIsDelaunay     (void) const;
#ifndef OSG_2_PREP
           bool                &getIsDelaunay     (void);
#endif

           GeoTexCoordsPtr     &editTextureControlPoints(void);
     const GeoTexCoordsPtr     &getTextureControlPoints(void) const;
#ifndef OSG_2_PREP
           GeoTexCoordsPtr     &getTextureControlPoints(void);
#endif

           UInt32              &editDirtyMask      (void);
     const UInt32              &getDirtyMask      (void) const;
#ifndef OSG_2_PREP
           UInt32              &getDirtyMask      (void);
#endif

           Int32               &editSurfaceGLId    (void);
     const Int32               &getSurfaceGLId    (void) const;
#ifndef OSG_2_PREP
           Int32               &getSurfaceGLId    (void);
#endif

           Real32              &editKnotsU         (const UInt32 index);
     const Real32              &getKnotsU         (const UInt32 index) const;
#ifndef OSG_2_PREP
           Real32              &getKnotsU         (const UInt32 index);
           MFReal32            &getKnotsU         (void);
     const MFReal32            &getKnotsU         (void) const;
#endif

           Real32              &editKnotsV         (const UInt32 index);
     const Real32              &getKnotsV         (const UInt32 index) const;
#ifndef OSG_2_PREP
           Real32              &getKnotsV         (const UInt32 index);
           MFReal32            &getKnotsV         (void);
     const MFReal32            &getKnotsV         (void) const;
#endif

           UInt32              &editKnotLengths    (const UInt32 index);
     const UInt32              &getKnotLengths    (const UInt32 index) const;
#ifndef OSG_2_PREP
           UInt32              &getKnotLengths    (const UInt32 index);
           MFUInt32            &getKnotLengths    (void);
     const MFUInt32            &getKnotLengths    (void) const;
#endif

           UInt32              &editDimensions     (const UInt32 index);
     const UInt32              &getDimensions     (const UInt32 index) const;
#ifndef OSG_2_PREP
           UInt32              &getDimensions     (const UInt32 index);
           MFUInt32            &getDimensions     (void);
     const MFUInt32            &getDimensions     (void) const;
#endif

           Pnt3f               &editCurveControlPoints(const UInt32 index);
     const Pnt3f               &getCurveControlPoints(const UInt32 index) const;
#ifndef OSG_2_PREP
           Pnt3f               &getCurveControlPoints(const UInt32 index);
           MFPnt3f             &getCurveControlPoints(void);
     const MFPnt3f             &getCurveControlPoints(void) const;
#endif

           Real32              &editKnots          (const UInt32 index);
     const Real32              &getKnots          (const UInt32 index) const;
#ifndef OSG_2_PREP
           Real32              &getKnots          (const UInt32 index);
           MFReal32            &getKnots          (void);
     const MFReal32            &getKnots          (void) const;
#endif

           UInt32              &editCurvesPerLoop  (const UInt32 index);
     const UInt32              &getCurvesPerLoop  (const UInt32 index) const;
#ifndef OSG_2_PREP
           UInt32              &getCurvesPerLoop  (const UInt32 index);
           MFUInt32            &getCurvesPerLoop  (void);
     const MFUInt32            &getCurvesPerLoop  (void) const;
#endif

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

     void setDimU           ( const UInt32 &value );
     void setDimV           ( const UInt32 &value );
     void setControlPoints  ( const GeoPositionsPtr &value );
     void setError          ( const Real32 &value );
     void setNumCurves      ( const UInt32 &value );
     void setIsDelaunay     ( const bool &value );
     void setTextureControlPoints( const GeoTexCoordsPtr &value );
     void setDirtyMask      ( const UInt32 &value );
     void setSurfaceGLId    ( const Int32 &value );

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Sync                                   */
    /*! \{                                                                 */

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Binary Access                              */
    /*! \{                                                                 */

    virtual UInt32 getBinSize (const BitVector         &whichField);
    virtual void   copyToBin  (      BinaryDataHandler &pMem,
                               const BitVector         &whichField);
    virtual void   copyFromBin(      BinaryDataHandler &pMem,
                               const BitVector         &whichField);


    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Construction                               */
    /*! \{                                                                 */

    static  SurfacePtr      create          (void); 
    static  SurfacePtr      createEmpty     (void); 

    /*! \}                                                                 */

    /*---------------------------------------------------------------------*/
    /*! \name                       Copy                                   */
    /*! \{                                                                 */

    virtual FieldContainerPtr     shallowCopy     (void) const; 

    /*! \}                                                                 */
    /*=========================  PROTECTED  ===============================*/
  protected:

    /*---------------------------------------------------------------------*/
    /*! \name                      Fields                                  */
    /*! \{                                                                 */

    SFUInt32            _sfDimU;
    SFUInt32            _sfDimV;
    MFReal32            _mfKnotsU;
    MFReal32            _mfKnotsV;
    SFGeoPositionsPtr   _sfControlPoints;
    SFReal32            _sfError;
    SFUInt32            _sfNumCurves;
    MFUInt32            _mfKnotLengths;
    MFUInt32            _mfDimensions;
    MFPnt3f             _mfCurveControlPoints;
    MFReal32            _mfKnots;
    MFUInt32            _mfCurvesPerLoop;
    SFBool              _sfIsDelaunay;
    SFGeoTexCoordsPtr   _sfTextureControlPoints;
    SFUInt32            _sfDirtyMask;
    SFInt32             _sfSurfaceGLId;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Constructors                               */
    /*! \{                                                                 */

    SurfaceBase(void);
    SurfaceBase(const SurfaceBase &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~SurfaceBase(void); 

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Sync                                   */
    /*! \{                                                                 */

#if !defined(OSG_FIXED_MFIELDSYNC)
    void executeSyncImpl(      SurfaceBase *pOther,
                         const BitVector         &whichField);

    virtual void   executeSync(      FieldContainer    &other,
                               const BitVector         &whichField);
#else
    void executeSyncImpl(      SurfaceBase *pOther,
                         const BitVector         &whichField,
                         const SyncInfo          &sInfo     );

    virtual void   executeSync(      FieldContainer    &other,
                               const BitVector         &whichField,
                               const SyncInfo          &sInfo);

    virtual void execBeginEdit     (const BitVector &whichField,
                                          UInt32     uiAspect,
                                          UInt32     uiContainerSize);

            void execBeginEditImpl (const BitVector &whichField,
                                          UInt32     uiAspect,
                                          UInt32     uiContainerSize);

    virtual void onDestroyAspect(UInt32 uiId, UInt32 uiAspect);
#endif

    /*! \}                                                                 */
    /*==========================  PRIVATE  ================================*/
  private:

    friend class FieldContainer;

    static FieldDescription   *_desc[];
    static FieldContainerType  _type;


    // prohibit default functions (move to 'public' if you need one)
    void operator =(const SurfaceBase &source);
};

//---------------------------------------------------------------------------
//   Exported Types
//---------------------------------------------------------------------------


typedef SurfaceBase *SurfaceBaseP;

typedef osgIF<SurfaceBase::isNodeCore,
              CoredNodePtr<Surface>,
              FieldContainer::attempt_to_create_CoredNodePtr_on_non_NodeCore_FC
              >::_IRet SurfaceNodePtr;

typedef RefPtr<SurfacePtr> SurfaceRefPtr;

OSG_END_NAMESPACE

#define OSGSURFACEBASE_HEADER_CVSID "@(#)$Id: FCBaseTemplate_h.h,v 1.42 2008/06/09 12:26:59 vossg Exp $"

#endif /* _OSGSURFACEBASE_H_ */
