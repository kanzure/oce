// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TopOpeBRepDS_DSS_HeaderFile
#define _TopOpeBRepDS_DSS_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _TopOpeBRepDS_DoubleMapOfIntegerShape_HeaderFile
#include <TopOpeBRepDS_DoubleMapOfIntegerShape.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _TopOpeBRepDS_MapOfIntegerShapeData_HeaderFile
#include <TopOpeBRepDS_MapOfIntegerShapeData.hxx>
#endif
#ifndef _TopOpeBRepDS_ListOfInterference_HeaderFile
#include <TopOpeBRepDS_ListOfInterference.hxx>
#endif
#ifndef _TopTools_ListOfShape_HeaderFile
#include <TopTools_ListOfShape.hxx>
#endif
#ifndef _TopoDS_Shape_HeaderFile
#include <TopoDS_Shape.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _TopOpeBRepDS_Config_HeaderFile
#include <TopOpeBRepDS_Config.hxx>
#endif
#ifndef _Handle_TopOpeBRepDS_Interference_HeaderFile
#include <Handle_TopOpeBRepDS_Interference.hxx>
#endif
class TopoDS_Shape;
class TopOpeBRepDS_ListOfInterference;
class TopTools_ListOfShape;
class TopOpeBRepDS_MapOfIntegerShapeData;
class TopOpeBRepDS_Interference;



class TopOpeBRepDS_DSS  {
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

  
  Standard_EXPORT   TopOpeBRepDS_DSS();
  
  Standard_EXPORT     void Clear() ;
  //! Insert a shape S. Returns the index. <br>
  Standard_EXPORT     Standard_Integer AddShape(const TopoDS_Shape& S) ;
  //! Insert a shape S which ancestor is I = 1 or 2. Returns the index. <br>
  Standard_EXPORT     Standard_Integer AddShape(const TopoDS_Shape& S,const Standard_Integer I) ;
  
  Standard_EXPORT     Standard_Boolean KeepShape(const Standard_Integer I,const Standard_Boolean K = Standard_True) const;
  
  Standard_EXPORT     Standard_Boolean KeepShape(const TopoDS_Shape& S,const Standard_Boolean K = Standard_True) const;
  
  Standard_EXPORT     void ChangeKeepShape(const Standard_Integer I,const Standard_Boolean K) ;
  
  Standard_EXPORT     void ChangeKeepShape(const TopoDS_Shape& S,const Standard_Boolean K) ;
  
  Standard_EXPORT    const TopOpeBRepDS_ListOfInterference& ShapeInterferences(const TopoDS_Shape& S,const Standard_Boolean K = Standard_True) const;
  
  Standard_EXPORT     TopOpeBRepDS_ListOfInterference& ChangeShapeInterferences(const TopoDS_Shape& S) ;
  
  Standard_EXPORT    const TopOpeBRepDS_ListOfInterference& ShapeInterferences(const Standard_Integer I,const Standard_Boolean K = Standard_True) const;
  
  Standard_EXPORT     TopOpeBRepDS_ListOfInterference& ChangeShapeInterferences(const Standard_Integer I) ;
  
  Standard_EXPORT    const TopTools_ListOfShape& ShapeSameDomain(const TopoDS_Shape& S) const;
  
  Standard_EXPORT     TopTools_ListOfShape& ChangeShapeSameDomain(const TopoDS_Shape& S) ;
  
  Standard_EXPORT    const TopTools_ListOfShape& ShapeSameDomain(const Standard_Integer I) const;
  
  Standard_EXPORT     TopTools_ListOfShape& ChangeShapeSameDomain(const Standard_Integer I) ;
  
  Standard_EXPORT     TopOpeBRepDS_MapOfIntegerShapeData& ChangeShapeData() ;
  
  Standard_EXPORT     void AddShapeSameDomain(const TopoDS_Shape& S,const TopoDS_Shape& SSD) ;
  
  Standard_EXPORT     void RemoveShapeSameDomain(const TopoDS_Shape& S,const TopoDS_Shape& SSD) ;
  
  Standard_EXPORT     Standard_Integer SameDomainRef(const Standard_Integer I) const;
  
  Standard_EXPORT     Standard_Integer SameDomainRef(const TopoDS_Shape& S) const;
  
  Standard_EXPORT     void SameDomainRef(const Standard_Integer I,const Standard_Integer Ref) ;
  
  Standard_EXPORT     void SameDomainRef(const TopoDS_Shape& S,const Standard_Integer Ref) ;
  
  Standard_EXPORT     TopOpeBRepDS_Config SameDomainOri(const Standard_Integer I) const;
  
  Standard_EXPORT     TopOpeBRepDS_Config SameDomainOri(const TopoDS_Shape& S) const;
  
  Standard_EXPORT     void SameDomainOri(const Standard_Integer I,const TopOpeBRepDS_Config Ori) ;
  
  Standard_EXPORT     void SameDomainOri(const TopoDS_Shape& S,const TopOpeBRepDS_Config Ori) ;
  
  Standard_EXPORT     Standard_Integer SameDomainInd(const Standard_Integer I) const;
  
  Standard_EXPORT     Standard_Integer SameDomainInd(const TopoDS_Shape& S) const;
  
  Standard_EXPORT     void SameDomainInd(const Standard_Integer I,const Standard_Integer Ind) ;
  
  Standard_EXPORT     void SameDomainInd(const TopoDS_Shape& S,const Standard_Integer Ind) ;
  
  Standard_EXPORT     Standard_Integer AncestorRank(const Standard_Integer I) const;
  
  Standard_EXPORT     Standard_Integer AncestorRank(const TopoDS_Shape& S) const;
  
  Standard_EXPORT     void AncestorRank(const Standard_Integer I,const Standard_Integer Ianc) ;
  
  Standard_EXPORT     void AncestorRank(const TopoDS_Shape& S,const Standard_Integer Ianc) ;
  
  Standard_EXPORT     void AddShapeInterference(const TopoDS_Shape& S,const Handle(TopOpeBRepDS_Interference)& I) ;
  
  Standard_EXPORT     void RemoveShapeInterference(const TopoDS_Shape& S,const Handle(TopOpeBRepDS_Interference)& I) ;
  
  Standard_EXPORT     void FillShapesSameDomain(const TopoDS_Shape& S1,const TopoDS_Shape& S2) ;
  
  Standard_EXPORT     void UnfillShapesSameDomain(const TopoDS_Shape& S1,const TopoDS_Shape& S2) ;
  
  Standard_EXPORT     Standard_Integer NbShapes() const;
  //! returns the shape of index I stored the maps <br>
  Standard_EXPORT    const TopoDS_Shape& Shape(const Standard_Integer I,const Standard_Boolean K = Standard_True) const;
  //! returns the index of shape <S>, 0 if <S> is not in the maps. <br>
  Standard_EXPORT     Standard_Integer Shape(const TopoDS_Shape& S,const Standard_Boolean K = Standard_True) const;
  //! Returns True if <S> has new geometries, i.e : <br>
//! True if S is stored and has an interference list not empty <br>
  Standard_EXPORT     Standard_Boolean HasGeometry(const TopoDS_Shape& S) const;
  //! Returns True if <S> is stored in the maps <br>
  Standard_EXPORT     Standard_Boolean HasShape(const TopoDS_Shape& S,const Standard_Boolean K = Standard_True) const;





protected:





private:



TopOpeBRepDS_DoubleMapOfIntegerShape myDMOIS;
Standard_Integer myNbDMOIS;
TopOpeBRepDS_MapOfIntegerShapeData myIMOSD;
TopOpeBRepDS_ListOfInterference myEmptyListOfInterference;
TopTools_ListOfShape myEmptyListOfShape;
TopoDS_Shape myEmptyShape;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
