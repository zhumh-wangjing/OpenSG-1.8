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
 **     class FTGLFont
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGFTGLFONTBASE_H_
#define _OSGFTGLFONTBASE_H_
#ifdef __sgi
#pragma once
#endif


#include <OSGConfig.h>
#include <OSGContribDef.h>

#include <OSGBaseTypes.h>
#include <OSGRefPtr.h>
#include <OSGCoredNodePtr.h>

#include <OSGFieldContainer.h> // Parent

#include <OSGStringFields.h> // Name type
#include <OSGUInt32Fields.h> // DrawType type
#include <OSGUInt32Fields.h> // Size type
#include <OSGUInt32Fields.h> // Res type
#include <OSGReal32Fields.h> // Depth type
#include <OSGUInt32Fields.h> // GLId type

#include <OSGFTGLFontFields.h>

OSG_BEGIN_NAMESPACE

class FTGLFont;
class BinaryDataHandler;

//! \brief FTGLFont Base Class.

class OSG_CONTRIBLIB_DLLMAPPING FTGLFontBase : public FieldContainer
{
  private:

    typedef FieldContainer    Inherited;

    /*==========================  PUBLIC  =================================*/
  public:

    typedef FTGLFontPtr  Ptr;

    enum
    {
        NameFieldId     = Inherited::NextFieldId,
        DrawTypeFieldId = NameFieldId     + 1,
        SizeFieldId     = DrawTypeFieldId + 1,
        ResFieldId      = SizeFieldId     + 1,
        DepthFieldId    = ResFieldId      + 1,
        GLIdFieldId     = DepthFieldId    + 1,
        NextFieldId     = GLIdFieldId     + 1
    };

    static const OSG::BitVector NameFieldMask;
    static const OSG::BitVector DrawTypeFieldMask;
    static const OSG::BitVector SizeFieldMask;
    static const OSG::BitVector ResFieldMask;
    static const OSG::BitVector DepthFieldMask;
    static const OSG::BitVector GLIdFieldMask;


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


           SFString            *editSFName           (void);
     const SFString            *getSFName           (void) const;
#ifndef OSG_2_PREP
           SFString            *getSFName           (void);
#endif

           SFUInt32            *editSFDrawType       (void);
     const SFUInt32            *getSFDrawType       (void) const;
#ifndef OSG_2_PREP
           SFUInt32            *getSFDrawType       (void);
#endif

           SFUInt32            *editSFSize           (void);
     const SFUInt32            *getSFSize           (void) const;
#ifndef OSG_2_PREP
           SFUInt32            *getSFSize           (void);
#endif

           SFUInt32            *editSFRes            (void);
     const SFUInt32            *getSFRes            (void) const;
#ifndef OSG_2_PREP
           SFUInt32            *getSFRes            (void);
#endif

           SFReal32            *editSFDepth          (void);
     const SFReal32            *getSFDepth          (void) const;
#ifndef OSG_2_PREP
           SFReal32            *getSFDepth          (void);
#endif


           std::string         &editName           (void);
     const std::string         &getName           (void) const;
#ifndef OSG_2_PREP
           std::string         &getName           (void);
#endif

           UInt32              &editDrawType       (void);
     const UInt32              &getDrawType       (void) const;
#ifndef OSG_2_PREP
           UInt32              &getDrawType       (void);
#endif

           UInt32              &editSize           (void);
     const UInt32              &getSize           (void) const;
#ifndef OSG_2_PREP
           UInt32              &getSize           (void);
#endif

           UInt32              &editRes            (void);
     const UInt32              &getRes            (void) const;
#ifndef OSG_2_PREP
           UInt32              &getRes            (void);
#endif

           Real32              &editDepth          (void);
     const Real32              &getDepth          (void) const;
#ifndef OSG_2_PREP
           Real32              &getDepth          (void);
#endif


    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

     void setName           ( const std::string &value );
     void setDrawType       ( const UInt32 &value );
     void setSize           ( const UInt32 &value );
     void setRes            ( const UInt32 &value );
     void setDepth          ( const Real32 &value );

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

    static  FTGLFontPtr      create          (void); 
    static  FTGLFontPtr      createEmpty     (void); 

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

    SFString            _sfName;
    SFUInt32            _sfDrawType;
    SFUInt32            _sfSize;
    SFUInt32            _sfRes;
    SFReal32            _sfDepth;
    SFUInt32            _sfGLId;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Constructors                               */
    /*! \{                                                                 */

    FTGLFontBase(void);
    FTGLFontBase(const FTGLFontBase &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~FTGLFontBase(void); 

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Get                                 */
    /*! \{                                                                 */

           SFUInt32            *editSFGLId           (void);
     const SFUInt32            *getSFGLId           (void) const;
#ifndef OSG_2_PREP
           SFUInt32            *getSFGLId           (void);
#endif

           UInt32              &editGLId           (void);
     const UInt32              &getGLId           (void) const;
#ifndef OSG_2_PREP
           UInt32              &getGLId           (void);
#endif

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

     void setGLId           (const UInt32 &value);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Sync                                   */
    /*! \{                                                                 */

#if !defined(OSG_FIXED_MFIELDSYNC)
    void executeSyncImpl(      FTGLFontBase *pOther,
                         const BitVector         &whichField);

    virtual void   executeSync(      FieldContainer    &other,
                               const BitVector         &whichField);
#else
    void executeSyncImpl(      FTGLFontBase *pOther,
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
    void operator =(const FTGLFontBase &source);
};

//---------------------------------------------------------------------------
//   Exported Types
//---------------------------------------------------------------------------


typedef FTGLFontBase *FTGLFontBaseP;

typedef osgIF<FTGLFontBase::isNodeCore,
              CoredNodePtr<FTGLFont>,
              FieldContainer::attempt_to_create_CoredNodePtr_on_non_NodeCore_FC
              >::_IRet FTGLFontNodePtr;

typedef RefPtr<FTGLFontPtr> FTGLFontRefPtr;

OSG_END_NAMESPACE

#define OSGFTGLFONTBASE_HEADER_CVSID "@(#)$Id: OSGFTGLFontBase.h,v 1.10 2008/06/09 12:28:01 vossg Exp $"

#endif /* _OSGFTGLFONTBASE_H_ */
