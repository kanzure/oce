// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Plate_SampledCurveConstraint_HeaderFile
#define _Plate_SampledCurveConstraint_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Plate_LinearXYZConstraint_HeaderFile
#include <Plate_LinearXYZConstraint.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
class Standard_DimensionMismatch;
class Plate_SequenceOfPinpointConstraint;
class Plate_LinearXYZConstraint;


//! define m PinPointConstraint driven by m unknown <br>
//! <br>
//! <br>
//! <br>
//! <br>
class Plate_SampledCurveConstraint  {
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

  
  Standard_EXPORT   Plate_SampledCurveConstraint(const Plate_SequenceOfPinpointConstraint& SOPPC,const Standard_Integer n);
  
       const Plate_LinearXYZConstraint& LXYZC() const;





protected:





private:



Plate_LinearXYZConstraint myLXYZC;


};


#include <Plate_SampledCurveConstraint.lxx>



// other Inline functions and methods (like "C++: function call" methods)


#endif
