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
 **     class DrawFunctorCore
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGDRAWFUNCTORCOREBASE_H_
#define _OSGDRAWFUNCTORCOREBASE_H_
#ifdef __sgi
#pragma once
#endif


#include <OSGConfig.h>
#include <OSGContribDef.h>

#include <OSGBaseTypes.h>
#include <OSGRefPtr.h>
#include <OSGCoredNodePtr.h>

#include <OSGMaterialDrawable.h> // Parent

#include <OSGDFFunctors.h> // VolumeUpdate type
#include <OSGDFFunctors.h> // Draw type

#include <OSGDrawFunctorCoreFields.h>

OSG_BEGIN_NAMESPACE

class DrawFunctorCore;
class BinaryDataHandler;

//! \brief DrawFunctorCore Base Class.

class OSG_CONTRIBLIB_DLLMAPPING DrawFunctorCoreBase : public MaterialDrawable
{
  private:

    typedef MaterialDrawable    Inherited;

    /*==========================  PUBLIC  =================================*/
  public:

    typedef DrawFunctorCorePtr  Ptr;

    enum
    {
        VolumeUpdateFieldId = Inherited::NextFieldId,
        DrawFieldId         = VolumeUpdateFieldId + 1,
        NextFieldId         = DrawFieldId         + 1
    };

    static const OSG::BitVector VolumeUpdateFieldMask;
    static const OSG::BitVector DrawFieldMask;


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


           SFVolumeFunctor     *editSFVolumeUpdate   (void);
     const SFVolumeFunctor     *getSFVolumeUpdate   (void) const;
#ifndef OSG_2_PREP
           SFVolumeFunctor     *getSFVolumeUpdate   (void);
#endif

           SFDrawFunctor       *editSFDraw           (void);
     const SFDrawFunctor       *getSFDraw           (void) const;
#ifndef OSG_2_PREP
           SFDrawFunctor       *getSFDraw           (void);
#endif


           VolumeFunctor       &editVolumeUpdate   (void);
     const VolumeFunctor       &getVolumeUpdate   (void) const;
#ifndef OSG_2_PREP
           VolumeFunctor       &getVolumeUpdate   (void);
#endif

           DrawFunctor         &editDraw           (void);
     const DrawFunctor         &getDraw           (void) const;
#ifndef OSG_2_PREP
           DrawFunctor         &getDraw           (void);
#endif

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

     void setVolumeUpdate   ( const VolumeFunctor &value );
     void setDraw           ( const DrawFunctor &value );

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

    static  DrawFunctorCorePtr      create          (void); 
    static  DrawFunctorCorePtr      createEmpty     (void); 

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

    SFVolumeFunctor     _sfVolumeUpdate;
    SFDrawFunctor       _sfDraw;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Constructors                               */
    /*! \{                                                                 */

    DrawFunctorCoreBase(void);
    DrawFunctorCoreBase(const DrawFunctorCoreBase &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~DrawFunctorCoreBase(void); 

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Sync                                   */
    /*! \{                                                                 */

#if !defined(OSG_FIXED_MFIELDSYNC)
    void executeSyncImpl(      DrawFunctorCoreBase *pOther,
                         const BitVector         &whichField);

    virtual void   executeSync(      FieldContainer    &other,
                               const BitVector         &whichField);
#else
    void executeSyncImpl(      DrawFunctorCoreBase *pOther,
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
    void operator =(const DrawFunctorCoreBase &source);
};

//---------------------------------------------------------------------------
//   Exported Types
//---------------------------------------------------------------------------


typedef DrawFunctorCoreBase *DrawFunctorCoreBaseP;

typedef osgIF<DrawFunctorCoreBase::isNodeCore,
              CoredNodePtr<DrawFunctorCore>,
              FieldContainer::attempt_to_create_CoredNodePtr_on_non_NodeCore_FC
              >::_IRet DrawFunctorCoreNodePtr;

typedef RefPtr<DrawFunctorCorePtr> DrawFunctorCoreRefPtr;

OSG_END_NAMESPACE

#define OSGDRAWFUNCTORCOREBASE_HEADER_CVSID "@(#)$Id: FCBaseTemplate_h.h,v 1.41 2008/06/09 07:30:44 vossg Exp $"

#endif /* _OSGDRAWFUNCTORCOREBASE_H_ */