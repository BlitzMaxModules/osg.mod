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

#include <osg/Vec4>
#include <osgGA/GUIActionAdapter>
#include <osgGA/GUIEventAdapter>
#include <osgManipulator/Dragger>
#include <osgManipulator/Translate1DDragger>
#include <osgManipulator/Translate2DDragger>
#include <osgManipulator/TranslatePlaneDragger>

// Must undefine IN and OUT macros defined in Windows headers
#ifdef IN
#undef IN
#endif
#ifdef OUT
#undef OUT
#endif

BEGIN_OBJECT_REFLECTOR(osgManipulator::TranslatePlaneDragger)
	I_DeclaringFile("osgManipulator/TranslatePlaneDragger");
	I_BaseType(osgManipulator::CompositeDragger);
	I_Constructor0(____TranslatePlaneDragger,
	               "",
	               "");
	I_Method3(bool, handle, IN, const osgManipulator::PointerInfo &, pi, IN, const osgGA::GUIEventAdapter &, ea, IN, osgGA::GUIActionAdapter &, us,
	          Properties::VIRTUAL,
	          __bool__handle__C5_PointerInfo_R1__C5_osgGA_GUIEventAdapter_R1__osgGA_GUIActionAdapter_R1,
	          "",
	          "");
	I_Method0(void, setupDefaultGeometry,
	          Properties::NON_VIRTUAL,
	          __void__setupDefaultGeometry,
	          "Setup default geometry for dragger. ",
	          "");
	I_Method1(void, setColor, IN, const osg::Vec4 &, color,
	          Properties::NON_VIRTUAL,
	          __void__setColor__C5_osg_Vec4_R1,
	          "",
	          "");
	I_Method0(osgManipulator::Translate1DDragger *, getTranslate1DDragger,
	          Properties::NON_VIRTUAL,
	          __Translate1DDragger_P1__getTranslate1DDragger,
	          "",
	          "");
	I_Method0(osgManipulator::Translate2DDragger *, getTranslate2DDragger,
	          Properties::NON_VIRTUAL,
	          __Translate2DDragger_P1__getTranslate2DDragger,
	          "",
	          "");
	I_SimpleProperty(const osg::Vec4 &, Color, 
	                 0, 
	                 __void__setColor__C5_osg_Vec4_R1);
	I_SimpleProperty(osgManipulator::Translate1DDragger *, Translate1DDragger, 
	                 __Translate1DDragger_P1__getTranslate1DDragger, 
	                 0);
	I_SimpleProperty(osgManipulator::Translate2DDragger *, Translate2DDragger, 
	                 __Translate2DDragger_P1__getTranslate2DDragger, 
	                 0);
END_REFLECTOR

