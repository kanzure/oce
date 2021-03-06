// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BOPTools_Tools3D_HeaderFile
#define _BOPTools_Tools3D_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _TopAbs_ShapeEnum_HeaderFile
#include <TopAbs_ShapeEnum.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _TopAbs_Orientation_HeaderFile
#include <TopAbs_Orientation.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _Handle_Geom_Surface_HeaderFile
#include <Handle_Geom_Surface.hxx>
#endif
#ifndef _TopAbs_State_HeaderFile
#include <TopAbs_State.hxx>
#endif
class TopoDS_Shape;
class TopoDS_Wire;
class TopoDS_Face;
class IntTools_Context;
class TopoDS_Edge;
class gp_Dir;
class TopTools_IndexedDataMapOfShapeListOfShape;
class Geom_Surface;
class gp_Pnt;
class gp_Pln;
class gp_Pnt2d;
class TopoDS_Solid;



//!  The class contains handy static functions <br>
//!  dealing with the topology <br>
class BOPTools_Tools3D  {
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

  
//! Returns amount of sub-shapes of type <aT> <br>
//! for the shape <aS> <br>
  Standard_EXPORT   static  Standard_Integer SubShapesAmount(const TopoDS_Shape& aS,const TopAbs_ShapeEnum aT) ;
  
//! Returns TRUE if <br>
//! amount of the vertices <=  amount of the edges> <br>
//! for the wire <aW> <br>
  Standard_EXPORT   static  Standard_Boolean IsConvexWire(const TopoDS_Wire& aW) ;
  
//! Remove seam edges from face <aF> <br>
  Standard_EXPORT   static  void RemoveSims(const TopoDS_Face& aF,IntTools_Context& aContext) ;
  
//! Remove seam edges from all faces of shape <aS> <br>
  Standard_EXPORT   static  void RemoveSims(const TopoDS_Shape& aS,IntTools_Context& aContext) ;
  
//! For the draft section edge <aEx> computes orientation <br>
//! in accordance with vector product between normals to <br>
//! the faces <aF1>,  <aF2> <br>
  Standard_EXPORT   static  TopAbs_Orientation EdgeOrientation(const TopoDS_Edge& aEx,const TopoDS_Face& aF1,const TopoDS_Face& aF2) ;
  
//! Returns TRUE if direction of the edge  <aE1> is not <br>
//! the same as for the edge <aE2> <br>
//! (using  projection) <br>
  Standard_EXPORT   static  Standard_Boolean IsSplitToReverse1(const TopoDS_Edge& aE1,const TopoDS_Edge& aE2,IntTools_Context& aContext) ;
  
//! Make the edge <aSp> seam edge for the face <aF> <br>
  Standard_EXPORT   static  void DoSplitSEAMOnFace(const TopoDS_Edge& aSp,const TopoDS_Face& aF) ;
  
//! Make the edge <theSplit> seam edge for the face <theFace> <br>
//! It uses pcurves of <theSeam> to make <theSplit> seam edge. <br>
//! IsReversed is true if pcurves of <theSplit> and <theSeam> are <br>
//! reversed according to each other. <br>
//! Returns true if <theSplit> was made seam edge for <theFace> <br>
  Standard_EXPORT   static  Standard_Boolean DoSplitSEAMOnFace(const TopoDS_Edge& theSplit,const TopoDS_Edge& theSeam,const TopoDS_Face& theFace,Standard_Boolean& IsReversed) ;
  
//! Returns TRUE if the edge  <aEx> is section edge <br>
//! between touching faces  <aF1>, <aF2> <br>
  Standard_EXPORT   static  Standard_Boolean IsTouchCase(const TopoDS_Edge& aEx,const TopoDS_Face& aF1,const TopoDS_Face& aF2) ;
  
//! Computes tangent (3D) for the edge <aE> <br>
//! at parameter <aT> <br>
//! Returns TRUE if the edge <aE> is not degenerated. <br>
  Standard_EXPORT   static  Standard_Boolean GetTangentToEdge(const TopoDS_Edge& aE,const Standard_Real aT,gp_Dir& aD) ;
  
//! Computes tangent (3D) for the edge <aE> <br>
//! at arbitrary intermediate parameter <br>
//! Returns TRUE if the edge <aE> is not degenerated. <br>
  Standard_EXPORT   static  Standard_Boolean GetTangentToEdge(const TopoDS_Edge& aE,gp_Dir& aD) ;
  
//! Computes normal to the face <aF> for the point on the edge <aE> <br>
//! at parameter <aT> <br>
  Standard_EXPORT   static  void GetNormalToFaceOnEdge(const TopoDS_Edge& aE,const TopoDS_Face& aF,const Standard_Real aT,gp_Dir& aD) ;
  
//! Computes normal to the face <aF> for the point on the edge <aE> <br>
//! at arbitrary intermediate parameter <br>
  Standard_EXPORT   static  void GetNormalToFaceOnEdge(const TopoDS_Edge& aE,const TopoDS_Face& aF,gp_Dir& aD) ;
  
//! Computes binormal to the face <aF> for the point on the edge <aE> <br>
//! at parameter <aT> <br>
  Standard_EXPORT   static  void GetBiNormal(const TopoDS_Edge& aE,const TopoDS_Face& aF,const Standard_Real aT,gp_Dir& aD) ;
  
//! Computes binormal to the face <aF> for the point on the edge <aE> <br>
//! at arbitrary intermediate parameter <br>
  Standard_EXPORT   static  void GetBiNormal(const TopoDS_Edge& aE,const TopoDS_Face& aF,gp_Dir& aD) ;
  
//! Returns TRUE if direction of the edge  <aE1> is not <br>
//! the same as for the edge <aE2> <br>
  Standard_EXPORT   static  Standard_Boolean IsSplitToReverse(const TopoDS_Edge& aE,const TopoDS_Edge& aSp) ;
  
//! Get face <anAdjF> that  is adjacent to the face <aF> through <br>
//! the edge <aE>  (using map EF <aEFMap>) <br>
//! Returns FALSE if adjacent face is not found <br>
  Standard_EXPORT   static  Standard_Boolean GetAdjacentFace(const TopoDS_Face& aF,const TopoDS_Edge& aE,const TopTools_IndexedDataMapOfShapeListOfShape& aEFMap,TopoDS_Face& anAdjF) ;
  
//! Returns TRUE if pair of faces <aF2> and <aF2Adj> <br>
//! that are adjacent faces through the edge <aSpEF2> <br>
//! crosses the face <aF1> by <aSpEF2> <br>
  Standard_EXPORT   static  Standard_Boolean IsKeepTwice(const TopoDS_Face& aF1,const TopoDS_Face& aF2,const TopoDS_Face& aF2Adj,const TopoDS_Edge& aSpEF2) ;
  
//! Returns 1  if scalar product aNF1* aNF2>0. <br>
//! Returns 0  if directions aNF1 aNF2 coinside <br>
//! Returns -1 if scalar product aNF1* aNF2<0. <br>
  Standard_EXPORT   static  Standard_Integer SenseFlag(const gp_Dir& aNF1,const gp_Dir& aNF2) ;
  
//! Compute normal <aD> to surface <aS> in point (U,V) <br>
//! Returns TRUE if directions aD1U, aD1V coinside <br>
  Standard_EXPORT   static  Standard_Boolean GetNormalToSurface(const Handle(Geom_Surface)& aS,const Standard_Real U,const Standard_Real V,gp_Dir& aD) ;
  
//! Internal usage <br>
  Standard_EXPORT   static  void GetPlanes(const TopoDS_Edge& aSp,const TopoDS_Edge& aE2,const TopTools_IndexedDataMapOfShapeListOfShape& aEFMap2,const TopoDS_Edge& aE1,const TopoDS_Face& aF1,TopAbs_State& aST1,IntTools_Context& aContext) ;
  
//! Get the orientation for the edge <aE> on the face <aF> <br>
//! Returns  TopAbs_INTERNAL if  the edge <aE> is not found <br>
//! on the face <aF> <br>
  Standard_EXPORT   static  TopAbs_Orientation Orientation(const TopoDS_Edge& aE,const TopoDS_Face& aF) ;
  
//! Computes signed distance between the 3D-point <aP> <br>
//! and the plane <aPL>. <br>
  Standard_EXPORT   static  Standard_Real SignDistance(const gp_Pnt& aP,const gp_Pln& aPL) ;
  
//! Computes normal to the face <aF> for the 3D-point that <br>
//! belonds to the edge <aE> at parameter <aT>. <br>
//!  Output: <br>
//! aPx  -  the 3D-point where the normal computed <br>
//! aD   -  the normal; <br>
  Standard_EXPORT   static  void GetApproxNormalToFaceOnEdge(const TopoDS_Edge& aE,const TopoDS_Face& aF,const Standard_Real aT,gp_Pnt& aPx,gp_Dir& aD) ;
  
//! Compute the point <aPx>,  (<aP2D>)  that is near to <br>
//! the edge <aE>   at parameter <aT>  towards to the <br>
//! material of the face <aF>. The value of shifting in <br>
//! 2D is <aDt2D> <br>
  Standard_EXPORT   static  void PointNearEdge(const TopoDS_Edge& aE,const TopoDS_Face& aF,const Standard_Real aT,const Standard_Real aDt2D,gp_Pnt2d& aP2D,gp_Pnt& aPx) ;
  
//! Computes the point <aPx>,  (<aP2D>)  that is near to <br>
//! the edge <aE>   at parameter <aT>  towards to the <br>
//! material of the face <aF>. The value of shifting in <br>
//!  2D is  dt2D=BOPTools_Tools3D::MinStepIn2d() <br>
  Standard_EXPORT   static  void PointNearEdge(const TopoDS_Edge& aE,const TopoDS_Face& aF,const Standard_Real aT,gp_Pnt2d& aP2D,gp_Pnt& aPx) ;
  
//! Compute the point <aPx>,  (<aP2D>)  that is near to <br>
//! the edge <aE>   at arbitrary  parameter  towards to the <br>
//! material of the face <aF>. The value of shifting in <br>
//!  2D is  dt2D=BOPTools_Tools3D::MinStepIn2d() <br>
  Standard_EXPORT   static  void PointNearEdge(const TopoDS_Edge& aE,const TopoDS_Face& aF,gp_Pnt2d& aP2D,gp_Pnt& aPx) ;
  
//! For 3D-point <aP1> find projection point <aPx> on the face <aF>. <br>
//! If the distance  (<aP1>, <aPx>) > TolF => <br>
//! For 3D-point <aP2> find projection point <aPx> on the face <aF>. <br>
//! If the distance  (<aP2>, <aPx>) > TolF => returns <aP1> <br>
  Standard_EXPORT   static  void PointToCompare(const gp_Pnt& aP1,const gp_Pnt& aP2,const TopoDS_Face& aF,gp_Pnt& aPx,IntTools_Context& aContext) ;
  
//! Compute 3D-state for the point on the split edge <aSp> <br>
//! (with base edge <aE1> and the face <aF1>) comparing with <br>
//! the face <aF2> <br>
  Standard_EXPORT   static  void GetPlane(const TopoDS_Edge& aSp,const TopoDS_Edge& aE1,const TopoDS_Face& aF1,const TopoDS_Face& aF2,TopAbs_State& aST,IntTools_Context& aContext) ;
  
//! Compute 3D-state for the point on the split edge <aSp> <br>
//! (with base edge <aEF2> and the adjacent face <aF2Adj>) comparing with <br>
//! the face <aF1> <br>
  Standard_EXPORT   static  void GetPointState(const TopoDS_Edge& aSp,const TopoDS_Edge& aEF2,const TopoDS_Face& aF2Adj,const TopoDS_Face& aF1,TopAbs_State& aST) ;
  
//! Get the edge <aER> from the face <aF> that is the same as <br>
//! the edge <aE> <br>
  Standard_EXPORT   static  void OrientEdgeOnFace(const TopoDS_Edge& aE,const TopoDS_Face& aF,TopoDS_Edge& aER) ;
  
//! Computes orientation for the split edge <aSp> <br>
//! [with base edge <aEx> and face <aF2>] on the <br>
//! face <aF1> <br>
  Standard_EXPORT   static  TopAbs_Orientation OrientTouchEdgeOnF1(const TopoDS_Edge& aSp,const TopoDS_Edge& aEx,const TopoDS_Face& aF1,const TopoDS_Face& aF2) ;
  
//! Get seam edges <aSimm1>, <aSimm2> for the face <aF> <br>
  Standard_EXPORT   static  void GetSeams(const TopoDS_Face& aF,TopoDS_Edge& aSimm1,TopoDS_Edge& aSimm2) ;
  
//! Get opposite seam edge <aS2> for the face <aF> with <br>
//! known  seam edge <aS1> <br>
  Standard_EXPORT   static  void GetSeam(const TopoDS_Face& aF,const TopoDS_Edge& aS1,TopoDS_Edge& aS2) ;
  
//! Check validity of the area of face <aF>. <br>
//! Returns TRUE if the Abs. value of the area <br>
//! is greater than  1.e-16 <br>
  Standard_EXPORT   static  Standard_Boolean IsValidArea(const TopoDS_Face& aF,Standard_Boolean& aNegativeFlag) ;
  
//! Returns simple step value that is used in 2D-computations <br>
//! = 1.e-5 <br>
  Standard_EXPORT   static  Standard_Real MinStepIn2d() ;
  
//! Returns TRUE if the shape <aS> does not contain <br>
//! geometry information  (e.g. empty compound) <br>
  Standard_EXPORT   static  Standard_Boolean IsEmptyShape(const TopoDS_Shape& aS) ;
  
//! Change orientations to opposite for the shape <aS> <br>
//! and all its sub-shapes. Returns <aSInv> <br>
  Standard_EXPORT   static  void InvertShape(const TopoDS_Shape& aS,TopoDS_Shape& aSInv) ;
  
//! Used in touch case <br>
//! Compute the 3D-state for the point on the split <br>
//! edge <aSp> (with base edge <aEF1> on face <aF1>) <br>
//! comparing with <aF2>. <br>
//! Used in touch case  <aF1>/<aF2> <br>
  Standard_EXPORT   static  TopAbs_State GetStatePartIN2D(const TopoDS_Edge& aSp,const TopoDS_Edge& aEF1,const TopoDS_Face& aF1,const TopoDS_Face& aF2,IntTools_Context& aContext) ;
  
  Standard_EXPORT   static  Standard_Boolean CheckSameDomainFaceInside(const TopoDS_Face& theFace1,const TopoDS_Face& theFace2,IntTools_Context& theContext) ;
  
  Standard_EXPORT   static  Standard_Boolean ComputeFaceState(const TopoDS_Face& theFace,const TopoDS_Solid& theRef,IntTools_Context& theContext,TopAbs_State& theState) ;
  
  Standard_EXPORT   static  Standard_Boolean TreatedAsAnalytic(const Standard_Real aTx,const gp_Pnt& aPx,const TopoDS_Edge& aEx,const TopoDS_Face& aFx,const TopoDS_Edge& aE1,const TopoDS_Face& aF1,const Standard_Real aTolTangent,const Standard_Real aTolRadius,TopAbs_State& aState,IntTools_Context& aContext) ;
  
  Standard_EXPORT   static  Standard_Boolean TreatedAsAnalytic(const TopoDS_Face& aFx,const TopoDS_Edge& aSpE1,const TopoDS_Face& aF1,const Standard_Real aTolTangent,const Standard_Real aTolRadius,TopAbs_State& aState,IntTools_Context& aContext) ;
  
  Standard_EXPORT   static  Standard_Boolean HasAnalyticSurfaceType(const TopoDS_Face& aF) ;





protected:





private:





};





// other Inline functions and methods (like "C++: function call" methods)


#endif
