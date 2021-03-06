// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Geom2dAdaptor_HeaderFile
#define _Geom2dAdaptor_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Handle_Geom2d_Curve_HeaderFile
#include <Handle_Geom2d_Curve.hxx>
#endif
class Geom2d_Curve;
class Adaptor2d_Curve2d;
class Geom2dAdaptor_Curve;
class Geom2dAdaptor_GHCurve;
class Geom2dAdaptor_HCurve;


//! this package  contains the geometric definition of <br>
//!          2d  curves compatible  with  the  Adaptor  package <br>
//!          templates. <br>
class Geom2dAdaptor  {
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

  
  Standard_EXPORT   static  Handle_Geom2d_Curve MakeCurve(const Adaptor2d_Curve2d& HC) ;





protected:





private:




friend class Geom2dAdaptor_Curve;
friend class Geom2dAdaptor_GHCurve;
friend class Geom2dAdaptor_HCurve;

};





// other Inline functions and methods (like "C++: function call" methods)


#endif
