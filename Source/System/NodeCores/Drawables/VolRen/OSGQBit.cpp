#define OSG_COMPILEQBITFIELDINST

#include <OSGQBit.h>

#include <OSGSFieldTypeDef.inl>
#include <OSGMFieldTypeDef.inl>

OSG_BEGIN_NAMESPACE

DataType FieldDataTraits1<QBit>::_type("QBit", "BaseType");

OSG_DLLEXPORT_SFIELD_DEF2(QBit, 1, OSG_SYSTEMLIB_DLLTMPLMAPPING);

OSG_DLLEXPORT_MFIELD_DEF2(QBit, 1, OSG_SYSTEMLIB_DLLTMPLMAPPING);

OSG_END_NAMESPACE
