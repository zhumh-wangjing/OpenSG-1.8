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

#include "OSGQPnt2dEditor_qt.h"

#include <OSGVecFieldDataType.h>
#include <OSGQOSGWidgetFactoryHelper.h>

OSG_USING_NAMESPACE

ValueEditorRegistrator _regPnt2d( FieldDataTraits<Pnt2d>::getType(),
                                 &QPnt2dEditor          ::create    );

QAbstractValueEditor *
QPnt2dEditor::create(QWidget *pParent, const char *name)
{
    return new QPnt2dEditor(pParent, name);
}

QPnt2dEditor::QPnt2dEditor(QWidget *pParent, const char *name)
    : Inherited  (pParent, name),
      _editHelper(this         )
{
    initSelf();
}

QPnt2dEditor::~QPnt2dEditor(void)
{
}

void
QPnt2dEditor::setLabelsVisible(bool bLabels)
{
    Inherited::setLabelsVisible(bLabels);
    
    _editHelper.setLabelsVisible(bLabels);
}

void
QPnt2dEditor::setReadOnly(bool bReadOnly)
{
    Inherited::setReadOnly(bReadOnly);
    
    _editHelper.setReadOnly(bReadOnly);
}

void
QPnt2dEditor::readField(FieldContainerPtr pFC,          UInt32 uiFieldId,
                        UInt32            uiValueIndex, UInt32 uiAspect  )
{
    _editHelper.readField(pFC, uiFieldId, uiValueIndex, uiAspect);
}

void
QPnt2dEditor::readField(FieldContainerPtr pFC,          UInt32 uiFieldId,
                        UInt32            uiValueIndex                   )
{
    _editHelper.readField(pFC, uiFieldId, uiValueIndex,
                            Thread::getCurrent()->getAspect());
}

void
QPnt2dEditor::writeField(FieldContainerPtr pFC,          UInt32 uiFieldId,
                         UInt32            uiValueIndex                   )
{
    _editHelper.writeField(pFC, uiFieldId, uiValueIndex);
}

void
QPnt2dEditor::addFieldElem(FieldContainerPtr pFC,          UInt32 uiFieldId,
                           UInt32            uiValueIndex                   )
{
    _editHelper.addFieldElem(pFC, uiFieldId, uiValueIndex);
}

void
QPnt2dEditor::removeFieldElem(FieldContainerPtr pFC,          UInt32 uiFieldId,
                              UInt32            uiValueIndex                   )
{
    _editHelper.removeFieldElem(pFC, uiFieldId, uiValueIndex);
}

void
QPnt2dEditor::slotSpinBoxChanged(void)
{
    emit valueChanged(this);
}

void
QPnt2dEditor::initSelf(void)
{
    connect(_editHelper.getSpinBox(0), SIGNAL(valueChanged      (void)),
            this,                      SLOT  (slotSpinBoxChanged(void)) );
    connect(_editHelper.getSpinBox(1), SIGNAL(valueChanged      (void)),
            this,                      SLOT  (slotSpinBoxChanged(void)) );
}

// include generated files
#include "OSGQPnt2dEditor_qt_moc.cpp"

/*------------------------------------------------------------------------*/
/*                              cvs id's                                  */

#ifdef OSG_SGI_CC
#pragma set woff 1174
#endif

#ifdef OSG_LINUX_ICC
#pragma warning(disable : 177)
#endif

namespace
{
    static Char8 cvsid_cpp       [] = "@(#)$Id: OSGQPnt2dEditor_qt.cpp,v 1.5 2004/12/20 11:09:53 neumannc Exp $";
    static Char8 cvsid_hpp       [] = OSGQPNT2DEDITORQT_HEADER_CVSID;
//    static Char8 cvsid_inl       [] = OSGQPNT2DEDITORQT_INLINE_CVSID;
}

#ifdef OSG_LINUX_ICC
#pragma warning(enable : 177)
#endif

#ifdef OSG_SGI_CC
#pragma reset woff 1174
#endif