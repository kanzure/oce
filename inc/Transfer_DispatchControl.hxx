// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Transfer_DispatchControl_HeaderFile
#define _Transfer_DispatchControl_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_Transfer_DispatchControl_HeaderFile
#include <Handle_Transfer_DispatchControl.hxx>
#endif

#ifndef _Handle_Transfer_TransientProcess_HeaderFile
#include <Handle_Transfer_TransientProcess.hxx>
#endif
#ifndef _Handle_Interface_InterfaceModel_HeaderFile
#include <Handle_Interface_InterfaceModel.hxx>
#endif
#ifndef _Interface_CopyControl_HeaderFile
#include <Interface_CopyControl.hxx>
#endif
#ifndef _Handle_Standard_Transient_HeaderFile
#include <Handle_Standard_Transient.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
class Transfer_TransientProcess;
class Interface_InterfaceModel;
class Interface_InterfaceError;
class Standard_Transient;


//! This is an auxiliary class for TransferDispatch, which allows <br>
//!           to record simple copies, as CopyControl from Interface, but <br>
//!           based on a TransientProcess. Hence, it allows in addition <br>
//!           more actions (such as recording results of adaptations) <br>
class Transfer_DispatchControl : public Interface_CopyControl {

public:

  //! Creates the DispatchControl, ready for use <br>
  Standard_EXPORT   Transfer_DispatchControl(const Handle(Interface_InterfaceModel)& model,const Handle(Transfer_TransientProcess)& TP);
  //! Returns the content of the DispatchControl : it can be used <br>
//!           for a direct call, if the basic methods do not suffice <br>
  Standard_EXPORT    const Handle_Transfer_TransientProcess& TransientProcess() const;
  //! Returns the Model from which the transfer is to be done <br>
  Standard_EXPORT    const Handle_Interface_InterfaceModel& StartingModel() const;
  //! Clears the List of Copied Results <br>
  Standard_EXPORT     void Clear() ;
  //! Binds a (Transient) Result to a (Transient) Starting Entity <br>
  Standard_EXPORT     void Bind(const Handle(Standard_Transient)& ent,const Handle(Standard_Transient)& res) ;
  //! Searches for the Result bound to a Starting Entity <br>
//!           If Found, returns True and fills <res> <br>
//!           Else, returns False and nullifies <res> <br>
  Standard_EXPORT     Standard_Boolean Search(const Handle(Standard_Transient)& ent,Handle(Standard_Transient)& res) const;




  DEFINE_STANDARD_RTTI(Transfer_DispatchControl)

protected:




private: 


Handle_Transfer_TransientProcess theTP;
Handle_Interface_InterfaceModel themodel;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
