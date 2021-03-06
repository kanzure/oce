// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BRepPrim_Sphere_HeaderFile
#define _BRepPrim_Sphere_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _BRepPrim_Revolution_HeaderFile
#include <BRepPrim_Revolution.hxx>
#endif
class Standard_DomainError;
class gp_Pnt;
class gp_Ax2;
class TopoDS_Face;


//! Implements the sphere primitive <br>
class BRepPrim_Sphere  : public BRepPrim_Revolution {
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

  //! Creates a Sphere at  origin with  Radius. The axes <br>
//!          of the sphere are the  reference axes. An error is <br>
//!          raised if the radius is < Resolution. <br>
  Standard_EXPORT   BRepPrim_Sphere(const Standard_Real Radius);
  //! Creates a Sphere with Center and Radius.  Axes are <br>
//!          the   referrence    axes.   This    is the    STEP <br>
//!          constructor. <br>
  Standard_EXPORT   BRepPrim_Sphere(const gp_Pnt& Center,const Standard_Real Radius);
  //! Creates a sphere with given axes system. <br>
  Standard_EXPORT   BRepPrim_Sphere(const gp_Ax2& Axes,const Standard_Real Radius);
  //! The surface normal should be directed  towards the <br>
//!          outside. <br>
  Standard_EXPORT   virtual  TopoDS_Face MakeEmptyLateralFace() const;





protected:





private:

  
  Standard_EXPORT     void SetMeridian() ;


Standard_Real myRadius;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
