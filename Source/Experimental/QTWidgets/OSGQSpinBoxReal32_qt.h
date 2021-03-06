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

#ifndef _OSGQSPINBOXREAL32_QT_H_
#define _OSGQSPINBOXREAL32_QT_H_
#ifdef __sgi
#pragma once
#endif

#include <OSGConfig.h>
#include <OSGWindowQTDef.h>
#include <OSGBaseTypes.h>

#include "OSGQSpinBoxBase_qt.h"
#include "OSGSpinBoxHelper.h"

#include <string>

class QObject;
class QEvent;
class QResizeEvent;
class QWheelEvent;
class QSpinWidget;

OSG_BEGIN_NAMESPACE

class OSG_WINDOWQTLIB_DLLMAPPING QSpinBoxReal32 : public QSpinBoxBase
{
    Q_OBJECT

  public:
    QSpinBoxReal32(QWidget *pParent = NULL, const char *name = NULL);

    virtual ~QSpinBoxReal32(void);

    inline  Real32      getValue       (void               ) const;
    inline  void        setValue       (Real32 value       );

    inline  Real32      getLowerBound  (void               ) const;
    inline  void        setLowerBound  (Real32 lowerBound  );

    inline  Real32      getUpperBound  (void               ) const;
    inline  void        setUpperBound  (Real32 upperBound  );

    inline  Real32      getStepSize    (void               ) const;
    inline  void        setStepSize    (Real32 stepSize    );

    inline  Real32      getPageStepSize(void               ) const;
    inline  void        setPageStepSize(Real32 pageStepSize);

    virtual std::string getValueByStr  (void               ) const;

    virtual bool        getWrapAround  (void               ) const;
    virtual void        setWrapAround  (bool   bWrapAround );

  public slots:
    virtual void setReadOnly  (      bool         bReadOnly);
    virtual void setValueByStr(const std::string &strValue );

    virtual void stepUp       (void          );
    virtual void stepDown     (void          );

    virtual void stepPageUp   (void);
    virtual void stepPageDown (void);

  protected:
    virtual bool eventFilter(QObject      *pObj,        QEvent *pEvent);
    virtual void resizeEvent(QResizeEvent *pResizeEvent               );
    virtual void wheelEvent (QWheelEvent  *pWheelEvent                );

  protected slots:
    virtual void slotTextChanged  (void);
    virtual void slotReturnPressed(void);

  private:
    typedef QSpinBoxBase Inherited;

    void updateDisplay(void);

    bool                   _bTextChanged;
    SpinBoxHelper<Real32>  _spinHelper;
    QSpinWidget           *_pSpinWidget;
};

OSG_END_NAMESPACE

#include "OSGQSpinBoxReal32_qt.inl"

#define OSGQSPINBOXREAL32QT_HEADER_CVSID "@(#)$Id: OSGQSpinBoxReal32_qt.h,v 1.1 2004/07/30 15:32:15 neumannc Exp $"

#endif /* _OSGQSPINBOXREAL32_QT_H_ */
