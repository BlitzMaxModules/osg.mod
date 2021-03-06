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

#include <osg/CameraView>
#include <osg/CopyOp>
#include <osg/Matrix>
#include <osg/NodeVisitor>
#include <osg/Object>
#include <osg/Quat>
#include <osg/Vec3d>

// Must undefine IN and OUT macros defined in Windows headers
#ifdef IN
#undef IN
#endif
#ifdef OUT
#undef OUT
#endif

BEGIN_ENUM_REFLECTOR(osg::CameraView::FieldOfViewMode)
	I_DeclaringFile("osg/CameraView");
	I_EnumLabel(osg::CameraView::UNCONSTRAINED);
	I_EnumLabel(osg::CameraView::HORIZONTAL);
	I_EnumLabel(osg::CameraView::VERTICAL);
END_REFLECTOR

BEGIN_OBJECT_REFLECTOR(osg::CameraView)
	I_DeclaringFile("osg/CameraView");
	I_BaseType(osg::Transform);
	I_Constructor0(____CameraView,
	               "",
	               "");
	I_ConstructorWithDefaults2(IN, const osg::CameraView &, pat, , IN, const osg::CopyOp &, copyop, osg::CopyOp::SHALLOW_COPY,
	                           ____CameraView__C5_CameraView_R1__C5_CopyOp_R1,
	                           "",
	                           "");
	I_Method0(osg::Object *, cloneType,
	          Properties::VIRTUAL,
	          __osg_Object_P1__cloneType,
	          "clone an object of the same type as the node. ",
	          "");
	I_Method1(osg::Object *, clone, IN, const osg::CopyOp &, copyop,
	          Properties::VIRTUAL,
	          __osg_Object_P1__clone__C5_osg_CopyOp_R1,
	          "return a clone of a node, with Object* return type. ",
	          "");
	I_Method1(bool, isSameKindAs, IN, const osg::Object *, obj,
	          Properties::VIRTUAL,
	          __bool__isSameKindAs__C5_osg_Object_P1,
	          "return true if this and obj are of the same kind of object. ",
	          "");
	I_Method0(const char *, className,
	          Properties::VIRTUAL,
	          __C5_char_P1__className,
	          "return the name of the node's class type. ",
	          "");
	I_Method0(const char *, libraryName,
	          Properties::VIRTUAL,
	          __C5_char_P1__libraryName,
	          "return the name of the node's library. ",
	          "");
	I_Method1(void, accept, IN, osg::NodeVisitor &, nv,
	          Properties::VIRTUAL,
	          __void__accept__osg_NodeVisitor_R1,
	          "Visitor Pattern : calls the apply method of a NodeVisitor with this node's type. ",
	          "");
	I_Method1(void, setPosition, IN, const osg::Vec3d &, pos,
	          Properties::NON_VIRTUAL,
	          __void__setPosition__C5_Vec3d_R1,
	          "Set the position of the camera view. ",
	          "");
	I_Method0(const osg::Vec3d &, getPosition,
	          Properties::NON_VIRTUAL,
	          __C5_Vec3d_R1__getPosition,
	          "Get the position of the camera view. ",
	          "");
	I_Method1(void, setAttitude, IN, const osg::Quat &, quat,
	          Properties::NON_VIRTUAL,
	          __void__setAttitude__C5_Quat_R1,
	          "Set the attitude of the camera view. ",
	          "");
	I_Method0(const osg::Quat &, getAttitude,
	          Properties::NON_VIRTUAL,
	          __C5_Quat_R1__getAttitude,
	          "Get the attitude of the camera view. ",
	          "");
	I_Method1(void, setFieldOfView, IN, double, fieldOfView,
	          Properties::NON_VIRTUAL,
	          __void__setFieldOfView__double,
	          "Set the field of view. ",
	          "The cameras field of view can be constrained to either the horizontal or vertex axis of the camera, or unconstrained in which case the camera/application are left to choose an appropriate field of view. The default value if 60 degrees. ");
	I_Method0(double, getFieldOfView,
	          Properties::NON_VIRTUAL,
	          __double__getFieldOfView,
	          "Get the field of view. ",
	          "");
	I_Method1(void, setFieldOfViewMode, IN, osg::CameraView::FieldOfViewMode, mode,
	          Properties::NON_VIRTUAL,
	          __void__setFieldOfViewMode__FieldOfViewMode,
	          "Set the field of view mode - controlling how the field of view of the camera is constrained by the CameaView settings. ",
	          "");
	I_Method0(osg::CameraView::FieldOfViewMode, getFieldOfViewMode,
	          Properties::NON_VIRTUAL,
	          __FieldOfViewMode__getFieldOfViewMode,
	          "Get the field of view mode. ",
	          "");
	I_Method1(void, setFocalLength, IN, double, focalLength,
	          Properties::NON_VIRTUAL,
	          __void__setFocalLength__double,
	          "Set the focal length of the camera. ",
	          "A focal length of 0.0 indicates that the camera/application should determine the focal length. The default value is 0.0. ");
	I_Method0(double, getFocalLength,
	          Properties::NON_VIRTUAL,
	          __double__getFocalLength,
	          "Get the focal length of the camera. ",
	          "");
	I_Method2(bool, computeLocalToWorldMatrix, IN, osg::Matrix &, matrix, IN, osg::NodeVisitor *, nv,
	          Properties::VIRTUAL,
	          __bool__computeLocalToWorldMatrix__Matrix_R1__NodeVisitor_P1,
	          "",
	          "");
	I_Method2(bool, computeWorldToLocalMatrix, IN, osg::Matrix &, matrix, IN, osg::NodeVisitor *, nv,
	          Properties::VIRTUAL,
	          __bool__computeWorldToLocalMatrix__Matrix_R1__NodeVisitor_P1,
	          "",
	          "");
	I_SimpleProperty(const osg::Quat &, Attitude, 
	                 __C5_Quat_R1__getAttitude, 
	                 __void__setAttitude__C5_Quat_R1);
	I_SimpleProperty(double, FieldOfView, 
	                 __double__getFieldOfView, 
	                 __void__setFieldOfView__double);
	I_SimpleProperty(osg::CameraView::FieldOfViewMode, FieldOfViewMode, 
	                 __FieldOfViewMode__getFieldOfViewMode, 
	                 __void__setFieldOfViewMode__FieldOfViewMode);
	I_SimpleProperty(double, FocalLength, 
	                 __double__getFocalLength, 
	                 __void__setFocalLength__double);
	I_SimpleProperty(const osg::Vec3d &, Position, 
	                 __C5_Vec3d_R1__getPosition, 
	                 __void__setPosition__C5_Vec3d_R1);
END_REFLECTOR

