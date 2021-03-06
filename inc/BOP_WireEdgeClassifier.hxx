// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BOP_WireEdgeClassifier_HeaderFile
#define _BOP_WireEdgeClassifier_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _gp_Pnt2d_HeaderFile
#include <gp_Pnt2d.hxx>
#endif
#ifndef _BRepClass_Edge_HeaderFile
#include <BRepClass_Edge.hxx>
#endif
#ifndef _BRepClass_FacePassiveClassifier_HeaderFile
#include <BRepClass_FacePassiveClassifier.hxx>
#endif
#ifndef _TopoDS_Shape_HeaderFile
#include <TopoDS_Shape.hxx>
#endif
#ifndef _BOP_CompositeClassifier_HeaderFile
#include <BOP_CompositeClassifier.hxx>
#endif
#ifndef _TopAbs_State_HeaderFile
#include <TopAbs_State.hxx>
#endif
#ifndef _Handle_BOP_Loop_HeaderFile
#include <Handle_BOP_Loop.hxx>
#endif
class TopoDS_Face;
class BOP_BlockBuilder;
class BOP_Loop;
class TopoDS_Shape;



//! The  algorithm is to classify loops that <br>
//! shapes are Wires, Element are Edge. <br>
class BOP_WireEdgeClassifier  : public BOP_CompositeClassifier {
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

  
//! Creates a classifier on edge <F>. <br>
//! Used to compare edges and wires on the edge <F>. <br>
  Standard_EXPORT   BOP_WireEdgeClassifier(const TopoDS_Face& F,const BOP_BlockBuilder& BB);
  
//! Classify loop <L1> with  <L2> <br>
  Standard_EXPORT   virtual  TopAbs_State Compare(const Handle(BOP_Loop)& L1,const Handle(BOP_Loop)& L2) ;
  
//! Internal usage <br>
  Standard_EXPORT     TopoDS_Shape LoopToShape(const Handle(BOP_Loop)& L) ;
  
//! Classify wire <B1> with wire <B2> <br>
  Standard_EXPORT     TopAbs_State CompareShapes(const TopoDS_Shape& B1,const TopoDS_Shape& B2) ;
  
//! Classify edge <E> with wire <W> <br>
  Standard_EXPORT     TopAbs_State CompareElementToShape(const TopoDS_Shape& E,const TopoDS_Shape& W) ;
  
//! Prepare classification involving wire <B> <br>
//! calls ResetElement on first edge of <B> <br>
  Standard_EXPORT     void ResetShape(const TopoDS_Shape& B) ;
  
//! Prepare classification involving edge <E> <br>
//! define 2D point (later used in Compare()) <br>
//! on first vertex of edge <E>. <br>
  Standard_EXPORT     void ResetElement(const TopoDS_Shape& E) ;
  
//! Add the edge <E> in the set of edges used in 2D point <br>
//! classification. <br>
  Standard_EXPORT     void CompareElement(const TopoDS_Shape& E) ;
  
//! Returns state of classification of 2D point, defined by <br>
//! ResetElement, with the current set of edges, defined by Compare. <br>
  Standard_EXPORT     TopAbs_State State() ;





protected:





private:



Standard_Boolean myFirstCompare;
gp_Pnt2d myPoint2d;
BRepClass_Edge myBCEdge;
BRepClass_FacePassiveClassifier myFPC;
TopoDS_Shape myShape;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
