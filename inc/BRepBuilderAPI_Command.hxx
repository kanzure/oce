// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BRepBuilderAPI_Command_HeaderFile
#define _BRepBuilderAPI_Command_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
class StdFail_NotDone;


//! Root class for all commands in BRepBuilderAPI. <br>
//! <br>
//!          Provides : <br>
//! <br>
//!          * Managements of the notDone flag. <br>
//! <br>
//!          * Catching of exceptions (not implemented). <br>
//! <br>
//!          * Logging (not implemented). <br>
class BRepBuilderAPI_Command  {
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

  
  Standard_EXPORT   virtual  void Delete() ;
Standard_EXPORT virtual ~BRepBuilderAPI_Command(){Delete() ; }
  
  Standard_EXPORT   virtual  Standard_Boolean IsDone() const;
  //! Raises NotDone if done is false. <br>
  Standard_EXPORT     void Check() const;





protected:

  //! Set done to False. <br>
  Standard_EXPORT   BRepBuilderAPI_Command();
  //! Set done to true. <br>
  Standard_EXPORT     void Done() ;
  //! Set done to false. <br>
  Standard_EXPORT     void NotDone() ;




private:



Standard_Boolean myDone;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
