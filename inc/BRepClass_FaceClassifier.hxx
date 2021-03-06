// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BRepClass_FaceClassifier_HeaderFile
#define _BRepClass_FaceClassifier_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _BRepClass_FClassifier_HeaderFile
#include <BRepClass_FClassifier.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
class BRepClass_FaceExplorer;
class gp_Pnt2d;
class TopoDS_Face;
class gp_Pnt;


//! Provides Constructors. <br>
class BRepClass_FaceClassifier  : public BRepClass_FClassifier {
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

  //! Empty constructor, undefined algorithm. <br>
  Standard_EXPORT   BRepClass_FaceClassifier();
  //! Creates an algorithm to classify the Point  P with <br>
//!          Tolerance <T> on the face described by <F>. <br>
  Standard_EXPORT   BRepClass_FaceClassifier(BRepClass_FaceExplorer& F,const gp_Pnt2d& P,const Standard_Real Tol);
  //! Creates an algorithm to classify the Point  P with <br>
//!          Tolerance <T> on the face <F>. <br>
  Standard_EXPORT   BRepClass_FaceClassifier(const TopoDS_Face& F,const gp_Pnt2d& P,const Standard_Real Tol);
  //! Classify  the Point  P  with  Tolerance <T> on the <br>
//!          face described by <F>. <br>
  Standard_EXPORT     void Perform(const TopoDS_Face& F,const gp_Pnt2d& P,const Standard_Real Tol) ;
  //! Creates an algorithm to classify the Point  P with <br>
//!          Tolerance <T> on the face described by <F>. <br>
  Standard_EXPORT   BRepClass_FaceClassifier(BRepClass_FaceExplorer& F,const gp_Pnt& P,const Standard_Real Tol);
  //! Creates an algorithm to classify the Point  P with <br>
//!          Tolerance <T> on the face <F>. <br>
  Standard_EXPORT   BRepClass_FaceClassifier(const TopoDS_Face& F,const gp_Pnt& P,const Standard_Real Tol);
  //! Classify  the Point  P  with  Tolerance <T> on the <br>
//!          face described by <F>. <br>
  Standard_EXPORT     void Perform(const TopoDS_Face& F,const gp_Pnt& P,const Standard_Real Tol) ;





protected:





private:





};





// other Inline functions and methods (like "C++: function call" methods)


#endif
