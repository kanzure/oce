// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepAP214_Array1OfExternalIdentificationItem_HeaderFile
#define _StepAP214_Array1OfExternalIdentificationItem_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_Address_HeaderFile
#include <Standard_Address.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
class Standard_RangeError;
class Standard_DimensionMismatch;
class Standard_OutOfRange;
class Standard_OutOfMemory;
class StepAP214_ExternalIdentificationItem;



class StepAP214_Array1OfExternalIdentificationItem  {
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

  
  Standard_EXPORT   StepAP214_Array1OfExternalIdentificationItem(const Standard_Integer Low,const Standard_Integer Up);
  
  Standard_EXPORT   StepAP214_Array1OfExternalIdentificationItem(const StepAP214_ExternalIdentificationItem& Item,const Standard_Integer Low,const Standard_Integer Up);
  
  Standard_EXPORT     void Init(const StepAP214_ExternalIdentificationItem& V) ;
  
  Standard_EXPORT     void Destroy() ;
~StepAP214_Array1OfExternalIdentificationItem()
{
  Destroy();
}
  
        Standard_Boolean IsAllocated() const;
  
  Standard_EXPORT    const StepAP214_Array1OfExternalIdentificationItem& Assign(const StepAP214_Array1OfExternalIdentificationItem& Other) ;
   const StepAP214_Array1OfExternalIdentificationItem& operator =(const StepAP214_Array1OfExternalIdentificationItem& Other) 
{
  return Assign(Other);
}
  
        Standard_Integer Length() const;
  
        Standard_Integer Lower() const;
  
        Standard_Integer Upper() const;
  
        void SetValue(const Standard_Integer Index,const StepAP214_ExternalIdentificationItem& Value) ;
  
       const StepAP214_ExternalIdentificationItem& Value(const Standard_Integer Index) const;
     const StepAP214_ExternalIdentificationItem& operator ()(const Standard_Integer Index) const
{
  return Value(Index);
}
  
        StepAP214_ExternalIdentificationItem& ChangeValue(const Standard_Integer Index) ;
      StepAP214_ExternalIdentificationItem& operator ()(const Standard_Integer Index) 
{
  return ChangeValue(Index);
}





protected:





private:

  
  Standard_EXPORT   StepAP214_Array1OfExternalIdentificationItem(const StepAP214_Array1OfExternalIdentificationItem& AnArray);


Standard_Integer myLowerBound;
Standard_Integer myUpperBound;
Standard_Address myStart;
Standard_Boolean isAllocated;


};

#define Array1Item StepAP214_ExternalIdentificationItem
#define Array1Item_hxx <StepAP214_ExternalIdentificationItem.hxx>
#define TCollection_Array1 StepAP214_Array1OfExternalIdentificationItem
#define TCollection_Array1_hxx <StepAP214_Array1OfExternalIdentificationItem.hxx>

#include <TCollection_Array1.lxx>

#undef Array1Item
#undef Array1Item_hxx
#undef TCollection_Array1
#undef TCollection_Array1_hxx


// other Inline functions and methods (like "C++: function call" methods)


#endif
