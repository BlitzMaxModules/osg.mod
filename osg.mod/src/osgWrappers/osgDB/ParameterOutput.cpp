// ***************************************************************************
//
//   Generated automatically by genwrapper.
//   Please DO NOT EDIT this file!
//
// ***************************************************************************

#include <osgIntrospection/ReflectionMacros>
#include <osgIntrospection/TypedMethodInfo>
#include <osgIntrospection/StaticMethodInfo>
#include <osgIntrospection/Attributes>

#include <osgDB/Output>
#include <osgDB/ParameterOutput>

// Must undefine IN and OUT macros defined in Windows headers
#ifdef IN
#undef IN
#endif
#ifdef OUT
#undef OUT
#endif

BEGIN_VALUE_REFLECTOR(osgDB::ParameterOutput)
	I_DeclaringFile("osgDB/ParameterOutput");
	I_Constructor1(IN, osgDB::Output &, fw,
	               Properties::NON_EXPLICIT,
	               ____ParameterOutput__Output_R1,
	               "",
	               "");
	I_Constructor2(IN, osgDB::Output &, fw, IN, int, numItemsPerLine,
	               ____ParameterOutput__Output_R1__int,
	               "",
	               "");
	I_Method0(void, begin,
	          Properties::NON_VIRTUAL,
	          __void__begin,
	          "",
	          "");
	I_Method0(void, newLine,
	          Properties::NON_VIRTUAL,
	          __void__newLine,
	          "",
	          "");
	I_Method0(void, end,
	          Properties::NON_VIRTUAL,
	          __void__end,
	          "",
	          "");
END_REFLECTOR

