// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#include <ChFiDS_HElSpine.hxx>

#ifndef _Standard_Type_HeaderFile
#include <Standard_Type.hxx>
#endif

#ifndef _Standard_OutOfRange_HeaderFile
#include <Standard_OutOfRange.hxx>
#endif
#ifndef _Standard_NoSuchObject_HeaderFile
#include <Standard_NoSuchObject.hxx>
#endif
#ifndef _Standard_DomainError_HeaderFile
#include <Standard_DomainError.hxx>
#endif
#ifndef _ChFiDS_ElSpine_HeaderFile
#include <ChFiDS_ElSpine.hxx>
#endif
#ifndef _Adaptor3d_Curve_HeaderFile
#include <Adaptor3d_Curve.hxx>
#endif

 


IMPLEMENT_STANDARD_TYPE(ChFiDS_HElSpine)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(Adaptor3d_HCurve),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),

IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(ChFiDS_HElSpine)


IMPLEMENT_DOWNCAST(ChFiDS_HElSpine,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(ChFiDS_HElSpine)


#define TheCurve ChFiDS_ElSpine
#define TheCurve_hxx <ChFiDS_ElSpine.hxx>
#define Adaptor3d_GenHCurve ChFiDS_HElSpine
#define Adaptor3d_GenHCurve_hxx <ChFiDS_HElSpine.hxx>
#define Handle_Adaptor3d_GenHCurve Handle_ChFiDS_HElSpine
#define Adaptor3d_GenHCurve_Type_() ChFiDS_HElSpine_Type_()
#include <Adaptor3d_GenHCurve.gxx>

