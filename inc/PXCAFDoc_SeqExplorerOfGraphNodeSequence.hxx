// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _PXCAFDoc_SeqExplorerOfGraphNodeSequence_HeaderFile
#define _PXCAFDoc_SeqExplorerOfGraphNodeSequence_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Handle_PXCAFDoc_SeqNodeOfGraphNodeSequence_HeaderFile
#include <Handle_PXCAFDoc_SeqNodeOfGraphNodeSequence.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Handle_PXCAFDoc_GraphNodeSequence_HeaderFile
#include <Handle_PXCAFDoc_GraphNodeSequence.hxx>
#endif
#ifndef _Handle_PXCAFDoc_GraphNode_HeaderFile
#include <Handle_PXCAFDoc_GraphNode.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
class PXCAFDoc_SeqNodeOfGraphNodeSequence;
class PXCAFDoc_GraphNodeSequence;
class Standard_NoSuchObject;
class Standard_OutOfRange;
class PXCAFDoc_GraphNode;



class PXCAFDoc_SeqExplorerOfGraphNodeSequence  {
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

  
  Standard_EXPORT   PXCAFDoc_SeqExplorerOfGraphNodeSequence(const Handle(PXCAFDoc_GraphNodeSequence)& S);
  
  Standard_EXPORT     Handle_PXCAFDoc_GraphNode Value(const Standard_Integer Index) ;
  
  Standard_EXPORT     Standard_Boolean Contains(const Handle(PXCAFDoc_GraphNode)& T) ;
  
  Standard_EXPORT     Standard_Integer Location(const Standard_Integer N,const Handle(PXCAFDoc_GraphNode)& T,const Standard_Integer FromIndex,const Standard_Integer ToIndex) ;
  
  Standard_EXPORT     Standard_Integer Location(const Standard_Integer N,const Handle(PXCAFDoc_GraphNode)& T) ;





protected:





private:



Handle_PXCAFDoc_SeqNodeOfGraphNodeSequence CurrentItem;
Standard_Integer CurrentIndex;
Handle_PXCAFDoc_GraphNodeSequence TheSequence;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
