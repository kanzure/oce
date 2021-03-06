// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _PDataStd_FieldOfHArray1OfHArray1OfReal_HeaderFile
#define _PDataStd_FieldOfHArray1OfHArray1OfReal_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _DBC_BaseArray_HeaderFile
#include <DBC_BaseArray.hxx>
#endif
#ifndef _Handle_PColStd_HArray1OfReal_HeaderFile
#include <Handle_PColStd_HArray1OfReal.hxx>
#endif
#ifndef _Handle_PDataStd_VArrayNodeOfFieldOfHArray1OfHArray1OfReal_HeaderFile
#include <Handle_PDataStd_VArrayNodeOfFieldOfHArray1OfHArray1OfReal.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_PrimitiveTypes_HeaderFile
#include <Standard_PrimitiveTypes.hxx>
#endif
class Standard_NegativeValue;
class Standard_OutOfRange;
class Standard_DimensionMismatch;
class Standard_NullObject;
class PColStd_HArray1OfReal;
class PDataStd_VArrayNodeOfFieldOfHArray1OfHArray1OfReal;
class PDataStd_VArrayTNodeOfFieldOfHArray1OfHArray1OfReal;



Standard_EXPORT const Handle(Standard_Type)& STANDARD_TYPE(PDataStd_FieldOfHArray1OfHArray1OfReal);


class PDataStd_FieldOfHArray1OfHArray1OfReal  : public DBC_BaseArray {

public:
  void* operator new(size_t,void* anAddress) 
  {
    return anAddress;
  }
  void* operator new(size_t size) 
  {
    return Standard::Allocate(size); 
  }
  void  operator delete(void *anAddress) 
  {
    if (anAddress) Standard::Free((Standard_Address&)anAddress); 
  }

  
  Standard_EXPORT   PDataStd_FieldOfHArray1OfHArray1OfReal();
  
  Standard_EXPORT   PDataStd_FieldOfHArray1OfHArray1OfReal(const Standard_Integer Size);
  
  Standard_EXPORT   PDataStd_FieldOfHArray1OfHArray1OfReal(const PDataStd_FieldOfHArray1OfHArray1OfReal& Varray);
  
  Standard_EXPORT     void Resize(const Standard_Integer Size) ;
  
  Standard_EXPORT     void Assign(const PDataStd_FieldOfHArray1OfHArray1OfReal& Other) ;
    void operator =(const PDataStd_FieldOfHArray1OfHArray1OfReal& Other) 
{
  Assign(Other);
}
  
  Standard_EXPORT     void SetValue(const Standard_Integer Index,const Handle(PColStd_HArray1OfReal)& Value) ;
  
  Standard_EXPORT     Handle_PColStd_HArray1OfReal& Value(const Standard_Integer Index) const;
    Handle_PColStd_HArray1OfReal& operator ()(const Standard_Integer Index) const
{
  return Value(Index);
}
  
  Standard_EXPORT     void Destroy() ;
~PDataStd_FieldOfHArray1OfHArray1OfReal()
{
  Destroy();
}



protected:




private: 

#ifdef CSFDB
// DBC_VArray : field
//
#endif



};





// other Inline functions and methods (like "C++: function call" methods)


#endif
