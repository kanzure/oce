// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _ShapeExtend_Parametrisation_HeaderFile
#define _ShapeExtend_Parametrisation_HeaderFile

//! Defines kind of global parametrisation on the composite surface <br>
//! each patch of the 1st row and column adds its range, Ui+1 = Ui + URange(i,1), etc. <br>
//! each patch gives range 1.: Ui = i-1, Vj = j-1 <br>
enum ShapeExtend_Parametrisation {
ShapeExtend_Natural,
ShapeExtend_Uniform,
ShapeExtend_Unitary
};

#ifndef _Standard_PrimitiveTypes_HeaderFile
#include <Standard_PrimitiveTypes.hxx>
#endif

#endif
