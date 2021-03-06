// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Graphic3d_Vertex_HeaderFile
#define _Graphic3d_Vertex_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Standard_ShortReal_HeaderFile
#include <Standard_ShortReal.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif


//! This class allows the creation and update of a <br>
//!	    3D point. <br>
class Graphic3d_Vertex  {
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

  //! Creates a point with 0.0, 0.0, 0.0 coordinates. <br>
  Standard_EXPORT   Graphic3d_Vertex();
  //! Creates a point with coordinates identical to <APoint>. <br>
  Standard_EXPORT   Graphic3d_Vertex(const Graphic3d_Vertex& APoint);
  //! Creates a point with <AX>, <AY> and <AZ> coordinates. <br>
  Standard_EXPORT   Graphic3d_Vertex(const Standard_Real AX,const Standard_Real AY,const Standard_Real AZ);
  //! Modifies the coordinates of the point <me>. <br>
  Standard_EXPORT     void SetCoord(const Standard_Real Xnew,const Standard_Real Ynew,const Standard_Real Znew) ;
  //! Modifies the X coordinate of the point <me>. <br>
  Standard_EXPORT     void SetXCoord(const Standard_Real Xnew) ;
  //! Modifies the Y coordinate of the point <me>. <br>
  Standard_EXPORT     void SetYCoord(const Standard_Real Ynew) ;
  //! Modifies the Z coordinate of the point <me>. <br>
  Standard_EXPORT     void SetZCoord(const Standard_Real Znew) ;
  //! Returns the coordinates of the point <me>. <br>
  Standard_EXPORT     void Coord(Standard_Real& AX,Standard_Real& AY,Standard_Real& AZ) const;
  //! Returns the X coordinates of the point <me>. <br>
  Standard_EXPORT     Standard_Real X() const;
  //! Returns the Y coordinate of the point <me>. <br>
  Standard_EXPORT     Standard_Real Y() const;
  //! Returns the Z coordinate of the point <me>. <br>
  Standard_EXPORT     Standard_Real Z() const;
  //! Returns the distance between <AV1> and <AV2>. <br>
  Standard_EXPORT   static  Standard_Real Distance(const Graphic3d_Vertex& AV1,const Graphic3d_Vertex& AV2) ;





protected:





private:



Standard_ShortReal MyX;
Standard_ShortReal MyY;
Standard_ShortReal MyZ;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
