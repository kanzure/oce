// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BRepFeat_MakePrism_HeaderFile
#define _BRepFeat_MakePrism_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _TopoDS_Shape_HeaderFile
#include <TopoDS_Shape.hxx>
#endif
#ifndef _TopTools_DataMapOfShapeListOfShape_HeaderFile
#include <TopTools_DataMapOfShapeListOfShape.hxx>
#endif
#ifndef _gp_Dir_HeaderFile
#include <gp_Dir.hxx>
#endif
#ifndef _TColGeom_SequenceOfCurve_HeaderFile
#include <TColGeom_SequenceOfCurve.hxx>
#endif
#ifndef _Handle_Geom_Curve_HeaderFile
#include <Handle_Geom_Curve.hxx>
#endif
#ifndef _BRepFeat_StatusError_HeaderFile
#include <BRepFeat_StatusError.hxx>
#endif
#ifndef _BRepFeat_Form_HeaderFile
#include <BRepFeat_Form.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
class Geom_Curve;
class Standard_ConstructionError;
class TopoDS_Shape;
class TopoDS_Face;
class gp_Dir;
class TopoDS_Edge;
class TColGeom_SequenceOfCurve;


//! Describes functions to build prism features. <br>
//! These can be depressions or protrusions. <br>
//! The semantics of prism feature creation is <br>
//! based on the construction of shapes: <br>
//! -   along a length <br>
//! -   up to a limiting face <br>
//! -   from a limiting face to a height. <br>
//! The shape defining construction of the prism feature can be <br>
//! either the supporting edge or the concerned area of a face. <br>
//! In case of the supporting edge, this contour <br>
//! can be attached to a face of the basis shape by <br>
//! binding. When the contour is bound to this face, <br>
//! the information that the contour will slide on the <br>
//! face becomes available to the relevant class methods. <br>
//! In case of the concerned area of a face, you <br>
//! could, for example, cut it out and move it to a <br>
//! different height which will define the limiting <br>
//! face of a protrusion or depression. <br>
class BRepFeat_MakePrism  : public BRepFeat_Form {
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

  //! Builds a prism by projecting a <br>
//! wire along the face of a shape. Initializes the prism class. <br>
      BRepFeat_MakePrism();
  //! Builds a prism by projecting a <br>
//! wire along the face of a shape. a face Pbase is selected in <br>
//!   the shape Sbase to serve as the basis for <br>
//!   the prism. The orientation of the prism will <br>
//!   be defined by the vector Direction. <br>
//! Fuse offers a choice between: <br>
//! -   removing matter with a Boolean cut using the setting 0 <br>
//! -   adding matter with Boolean fusion using the setting 1. <br>
//!   The sketch face Skface serves to determine <br>
//! the type of operation. If it is inside the basis <br>
//! shape, a local operation such as glueing can be performed. <br>
//! Exceptions <br>
//! Standard_ConstructionError if the face <br>
//! does not belong to the basis or the prism shape. <br>
      BRepFeat_MakePrism(const TopoDS_Shape& Sbase,const TopoDS_Shape& Pbase,const TopoDS_Face& Skface,const gp_Dir& Direction,const Standard_Integer Fuse,const Standard_Boolean Modify);
  //! Initializes this algorithm for building prisms along surfaces. <br>
//! A face Pbase is selected in the shape Sbase <br>
//! to serve as the basis for the prism. The <br>
//! orientation of the prism will be defined by the vector Direction. <br>
//! Fuse offers a choice between: <br>
//! -   removing matter with a Boolean cut using the setting 0 <br>
//! -   adding matter with Boolean fusion using the setting 1. <br>
//! The sketch face Skface serves to determine <br>
//! the type of operation. If it is inside the basis <br>
//! shape, a local operation such as glueing can be performed. <br>
  Standard_EXPORT     void Init(const TopoDS_Shape& Sbase,const TopoDS_Shape& Pbase,const TopoDS_Face& Skface,const gp_Dir& Direction,const Standard_Integer Fuse,const Standard_Boolean Modify) ;
  //! Indicates that the edge <E> will slide on the face <br>
//!  <OnFace>. Raises ConstructionError if the  face does not belong to the <br>
//! basis shape, or the edge to the prismed shape. <br>
  Standard_EXPORT     void Add(const TopoDS_Edge& E,const TopoDS_Face& OnFace) ;
  
  Standard_EXPORT     void Perform(const Standard_Real Length) ;
  
  Standard_EXPORT     void Perform(const TopoDS_Shape& Until) ;
  //! Assigns one of the following semantics <br>
//! -   to a height Length <br>
//! -   to a face Until <br>
//! -   from a face From to a height Until. <br>
//! Reconstructs the feature topologically according to the semantic option chosen. <br>
  Standard_EXPORT     void Perform(const TopoDS_Shape& From,const TopoDS_Shape& Until) ;
  //! Realizes a semi-infinite prism, limited by the <br>
//! position of the prism base. All other faces extend infinitely. <br>
  Standard_EXPORT     void PerformUntilEnd() ;
  //! Realizes a semi-infinite prism, limited by the face Funtil. <br>
  Standard_EXPORT     void PerformFromEnd(const TopoDS_Shape& FUntil) ;
  //! Builds an infinite prism. The infinite descendants will not be kept in the result. <br>
  Standard_EXPORT     void PerformThruAll() ;
  //! Assigns both a limiting shape, Until from <br>
//! TopoDS_Shape, and a height, Length at which to stop generation of the prism feature. <br>
  Standard_EXPORT     void PerformUntilHeight(const TopoDS_Shape& Until,const Standard_Real Length) ;
  //! Returns the list of curves S parallel to the axis of the prism. <br>
  Standard_EXPORT     void Curves(TColGeom_SequenceOfCurve& S) ;
  //! Generates a curve along the center of mass of the primitive. <br>
  Standard_EXPORT     Handle_Geom_Curve BarycCurve() ;





protected:





private:



TopoDS_Shape myPbase;
TopTools_DataMapOfShapeListOfShape mySlface;
gp_Dir myDir;
TColGeom_SequenceOfCurve myCurves;
Handle_Geom_Curve myBCurve;
BRepFeat_StatusError myStatusError;


};


#include <BRepFeat_MakePrism.lxx>



// other Inline functions and methods (like "C++: function call" methods)


#endif
