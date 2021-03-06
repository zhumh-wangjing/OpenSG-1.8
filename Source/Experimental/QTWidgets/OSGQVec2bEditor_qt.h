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

#ifndef _OSGQVEC2BEDITOR_QT_H_
#define _OSGQVEC2BEDITOR_QT_H_
#ifdef __sgi
#pragma once
#endif

#include <OSGConfig.h>

// Not all compilers can handle the byte Pnts/Vecs...
#ifndef OSG_NO_INT8_PNT

#include <OSGWindowQTDef.h>
#include <OSGVector.h>

#include "OSGQAbstractValueEditor_qt.h"
#include "OSGQVectorPointEditorHelper.h"

OSG_BEGIN_NAMESPACE

class OSG_WINDOWQTLIB_DLLMAPPING QVec2bEditor : 
    public QAbstractValueEditor
{
    Q_OBJECT

  public:
    static QAbstractValueEditor *create(QWidget *pParent, const char *name);

    QVec2bEditor(QWidget *pParent, const char *name);

    virtual ~QVec2bEditor(void);

  public slots:
    virtual void setLabelsVisible(bool bLabels  );
    virtual void setReadOnly     (bool bReadOnly);

    virtual void readField (FieldContainerPtr pFC,          UInt32 uiFieldId,
                            UInt32            uiValueIndex, UInt32 uiAspect  );
    virtual void readField (FieldContainerPtr pFC,          UInt32 uiFieldId,
                            UInt32            uiValueIndex                   );

    virtual void writeField(FieldContainerPtr pFC,          UInt32 uiFieldId,
                            UInt32            uiValueIndex                   );

    virtual void addFieldElem   (FieldContainerPtr pFC,
                                 UInt32            uiFieldId,
                                 UInt32            uiValueIndex);
    virtual void removeFieldElem(FieldContainerPtr pFC,
                                 UInt32            uiFieldId,
                                 UInt32            uiValueIndex);

  protected slots:
    virtual void slotSpinBoxChanged(void);

  private:
    typedef QAbstractValueEditor Inherited;

    void initSelf(void);
    
    QVectorPointEditorHelper<Vec2b> _editHelper;
};

OSG_END_NAMESPACE

//#include "OSGQVec2bEditor.inl"

#define OSGQVEC2BEDITORQT_HEADER_CVSID "@(#)$Id: OSGQVec2bEditor_qt.h,v 1.4 2005/02/20 19:48:06 dirk Exp $"

#endif // OSG_NO_INT8_PNT

#endif /* _OSGQVEC2BEDITOR_QT_H_ */
