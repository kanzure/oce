
#include <RWStepGeom_RWPlane.ixx>
#include <StepGeom_Axis2Placement3d.hxx>


#include <Interface_EntityIterator.hxx>


#include <StepGeom_Plane.hxx>


RWStepGeom_RWPlane::RWStepGeom_RWPlane () {}

void RWStepGeom_RWPlane::ReadStep
	(const Handle(StepData_StepReaderData)& data,
	 const Standard_Integer num,
	 Handle(Interface_Check)& ach,
	 const Handle(StepGeom_Plane)& ent) const
{


	// --- Number of Parameter Control ---

	if (!data->CheckNbParams(num,2,ach,"plane")) return;

	// --- inherited field : name ---

	Handle(TCollection_HAsciiString) aName;
	//szv#4:S4163:12Mar99 `tandard_Boolean stat1 =` not needed
	data->ReadString (num,1,"name",ach,aName);

	// --- inherited field : position ---

	Handle(StepGeom_Axis2Placement3d) aPosition;
	//szv#4:S4163:12Mar99 `tandard_Boolean stat2 =` not needed
	data->ReadEntity(num, 2,"position", ach, STANDARD_TYPE(StepGeom_Axis2Placement3d), aPosition);

	//--- Initialisation of the read entity ---


	ent->Init(aName, aPosition);
}


void RWStepGeom_RWPlane::WriteStep
	(StepData_StepWriter& SW,
	 const Handle(StepGeom_Plane)& ent) const
{

	// --- inherited field name ---

	SW.Send(ent->Name());

	// --- inherited field position ---

	SW.Send(ent->Position());
}


void RWStepGeom_RWPlane::Share(const Handle(StepGeom_Plane)& ent, Interface_EntityIterator& iter) const
{

	iter.GetOneItem(ent->Position());
}

