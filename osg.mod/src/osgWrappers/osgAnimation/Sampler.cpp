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

#include <osgAnimation/Interpolator>
#include <osgAnimation/Keyframe>
#include <osgAnimation/Sampler>

// Must undefine IN and OUT macros defined in Windows headers
#ifdef IN
#undef IN
#endif
#ifdef OUT
#undef OUT
#endif

BEGIN_ABSTRACT_OBJECT_REFLECTOR(osgAnimation::Sampler)
	I_DeclaringFile("osgAnimation/Sampler");
	I_BaseType(osg::Referenced);
	I_Constructor0(____Sampler,
	               "",
	               "");
	I_Method0(osgAnimation::KeyframeContainer *, getKeyframeContainer,
	          Properties::PURE_VIRTUAL,
	          __KeyframeContainer_P1__getKeyframeContainer,
	          "",
	          "");
	I_Method0(const osgAnimation::KeyframeContainer *, getKeyframeContainer,
	          Properties::PURE_VIRTUAL,
	          __C5_KeyframeContainer_P1__getKeyframeContainer,
	          "",
	          "");
	I_SimpleProperty(osgAnimation::KeyframeContainer *, KeyframeContainer, 
	                 __KeyframeContainer_P1__getKeyframeContainer, 
	                 0);
END_REFLECTOR

TYPE_NAME_ALIAS(osgAnimation::TemplateSampler< osgAnimation::DoubleLinearInterpolator >, osgAnimation::DoubleLinearSampler)

TYPE_NAME_ALIAS(osgAnimation::TemplateSampler< osgAnimation::FloatLinearInterpolator >, osgAnimation::FloatLinearSampler)

TYPE_NAME_ALIAS(osgAnimation::TemplateSampler< osgAnimation::Vec2LinearInterpolator >, osgAnimation::Vec2LinearSampler)

TYPE_NAME_ALIAS(osgAnimation::TemplateSampler< osgAnimation::Vec3LinearInterpolator >, osgAnimation::Vec3LinearSampler)

TYPE_NAME_ALIAS(osgAnimation::TemplateSampler< osgAnimation::Vec4LinearInterpolator >, osgAnimation::Vec4LinearSampler)

TYPE_NAME_ALIAS(osgAnimation::TemplateSampler< osgAnimation::QuatSphericalLinearInterpolator >, osgAnimation::QuatSphericalLinearSampler)

TYPE_NAME_ALIAS(osgAnimation::TemplateSampler< osgAnimation::FloatCubicBezierInterpolator >, osgAnimation::FloatCubicBezierSampler)

TYPE_NAME_ALIAS(osgAnimation::TemplateSampler< osgAnimation::DoubleCubicBezierInterpolator >, osgAnimation::DoubleCubicBezierSampler)

TYPE_NAME_ALIAS(osgAnimation::TemplateSampler< osgAnimation::Vec2CubicBezierInterpolator >, osgAnimation::Vec2CubicBezierSampler)

TYPE_NAME_ALIAS(osgAnimation::TemplateSampler< osgAnimation::Vec3CubicBezierInterpolator >, osgAnimation::Vec3CubicBezierSampler)

TYPE_NAME_ALIAS(osgAnimation::TemplateSampler< osgAnimation::Vec4CubicBezierInterpolator >, osgAnimation::Vec4CubicBezierSampler)

BEGIN_OBJECT_REFLECTOR(osgAnimation::TemplateSampler< osgAnimation::DoubleCubicBezierInterpolator >)
	I_DeclaringFile("osgAnimation/Sampler");
	I_BaseType(osgAnimation::Sampler);
	I_Constructor0(____TemplateSampler,
	               "",
	               "");
	I_Method2(void, getValueAt, IN, float, time, IN, osgAnimation::TemplateSampler< osgAnimation::DoubleCubicBezierInterpolator >::UsingType &, result,
	          Properties::NON_VIRTUAL,
	          __void__getValueAt__float__UsingType_R1,
	          "",
	          "");
	I_Method1(void, setKeyframeContainer, IN, osgAnimation::TemplateSampler< osgAnimation::DoubleCubicBezierInterpolator >::KeyframeContainerType *, kf,
	          Properties::NON_VIRTUAL,
	          __void__setKeyframeContainer__KeyframeContainerType_P1,
	          "",
	          "");
	I_Method0(osgAnimation::KeyframeContainer *, getKeyframeContainer,
	          Properties::VIRTUAL,
	          __KeyframeContainer_P1__getKeyframeContainer,
	          "",
	          "");
	I_Method0(const osgAnimation::KeyframeContainer *, getKeyframeContainer,
	          Properties::VIRTUAL,
	          __C5_KeyframeContainer_P1__getKeyframeContainer,
	          "",
	          "");
	I_Method0(osgAnimation::TemplateSampler< osgAnimation::DoubleCubicBezierInterpolator >::KeyframeContainerType *, getKeyframeContainerTyped,
	          Properties::NON_VIRTUAL,
	          __KeyframeContainerType_P1__getKeyframeContainerTyped,
	          "",
	          "");
	I_Method0(const osgAnimation::TemplateSampler< osgAnimation::DoubleCubicBezierInterpolator >::KeyframeContainerType *, getKeyframeContainerTyped,
	          Properties::NON_VIRTUAL,
	          __C5_KeyframeContainerType_P1__getKeyframeContainerTyped,
	          "",
	          "");
	I_Method0(osgAnimation::TemplateSampler< osgAnimation::DoubleCubicBezierInterpolator >::KeyframeContainerType *, getOrCreateKeyframeContainer,
	          Properties::NON_VIRTUAL,
	          __KeyframeContainerType_P1__getOrCreateKeyframeContainer,
	          "",
	          "");
	I_Method0(float, getStartTime,
	          Properties::NON_VIRTUAL,
	          __float__getStartTime,
	          "",
	          "");
	I_Method0(float, getEndTime,
	          Properties::NON_VIRTUAL,
	          __float__getEndTime,
	          "",
	          "");
	I_SimpleProperty(float, EndTime, 
	                 __float__getEndTime, 
	                 0);
	I_SimpleProperty(osgAnimation::KeyframeContainer *, KeyframeContainer, 
	                 __KeyframeContainer_P1__getKeyframeContainer, 
	                 0);
	I_SimpleProperty(osgAnimation::TemplateSampler< osgAnimation::DoubleCubicBezierInterpolator >::KeyframeContainerType *, KeyframeContainerTyped, 
	                 __KeyframeContainerType_P1__getKeyframeContainerTyped, 
	                 0);
	I_SimpleProperty(float, StartTime, 
	                 __float__getStartTime, 
	                 0);
END_REFLECTOR

BEGIN_OBJECT_REFLECTOR(osgAnimation::TemplateSampler< osgAnimation::DoubleLinearInterpolator >)
	I_DeclaringFile("osgAnimation/Sampler");
	I_BaseType(osgAnimation::Sampler);
	I_Constructor0(____TemplateSampler,
	               "",
	               "");
	I_Method2(void, getValueAt, IN, float, time, IN, osgAnimation::TemplateSampler< osgAnimation::DoubleLinearInterpolator >::UsingType &, result,
	          Properties::NON_VIRTUAL,
	          __void__getValueAt__float__UsingType_R1,
	          "",
	          "");
	I_Method1(void, setKeyframeContainer, IN, osgAnimation::TemplateSampler< osgAnimation::DoubleLinearInterpolator >::KeyframeContainerType *, kf,
	          Properties::NON_VIRTUAL,
	          __void__setKeyframeContainer__KeyframeContainerType_P1,
	          "",
	          "");
	I_Method0(osgAnimation::KeyframeContainer *, getKeyframeContainer,
	          Properties::VIRTUAL,
	          __KeyframeContainer_P1__getKeyframeContainer,
	          "",
	          "");
	I_Method0(const osgAnimation::KeyframeContainer *, getKeyframeContainer,
	          Properties::VIRTUAL,
	          __C5_KeyframeContainer_P1__getKeyframeContainer,
	          "",
	          "");
	I_Method0(osgAnimation::TemplateSampler< osgAnimation::DoubleLinearInterpolator >::KeyframeContainerType *, getKeyframeContainerTyped,
	          Properties::NON_VIRTUAL,
	          __KeyframeContainerType_P1__getKeyframeContainerTyped,
	          "",
	          "");
	I_Method0(const osgAnimation::TemplateSampler< osgAnimation::DoubleLinearInterpolator >::KeyframeContainerType *, getKeyframeContainerTyped,
	          Properties::NON_VIRTUAL,
	          __C5_KeyframeContainerType_P1__getKeyframeContainerTyped,
	          "",
	          "");
	I_Method0(osgAnimation::TemplateSampler< osgAnimation::DoubleLinearInterpolator >::KeyframeContainerType *, getOrCreateKeyframeContainer,
	          Properties::NON_VIRTUAL,
	          __KeyframeContainerType_P1__getOrCreateKeyframeContainer,
	          "",
	          "");
	I_Method0(float, getStartTime,
	          Properties::NON_VIRTUAL,
	          __float__getStartTime,
	          "",
	          "");
	I_Method0(float, getEndTime,
	          Properties::NON_VIRTUAL,
	          __float__getEndTime,
	          "",
	          "");
	I_SimpleProperty(float, EndTime, 
	                 __float__getEndTime, 
	                 0);
	I_SimpleProperty(osgAnimation::KeyframeContainer *, KeyframeContainer, 
	                 __KeyframeContainer_P1__getKeyframeContainer, 
	                 0);
	I_SimpleProperty(osgAnimation::TemplateSampler< osgAnimation::DoubleLinearInterpolator >::KeyframeContainerType *, KeyframeContainerTyped, 
	                 __KeyframeContainerType_P1__getKeyframeContainerTyped, 
	                 0);
	I_SimpleProperty(float, StartTime, 
	                 __float__getStartTime, 
	                 0);
END_REFLECTOR

BEGIN_OBJECT_REFLECTOR(osgAnimation::TemplateSampler< osgAnimation::FloatCubicBezierInterpolator >)
	I_DeclaringFile("osgAnimation/Sampler");
	I_BaseType(osgAnimation::Sampler);
	I_Constructor0(____TemplateSampler,
	               "",
	               "");
	I_Method2(void, getValueAt, IN, float, time, IN, osgAnimation::TemplateSampler< osgAnimation::FloatCubicBezierInterpolator >::UsingType &, result,
	          Properties::NON_VIRTUAL,
	          __void__getValueAt__float__UsingType_R1,
	          "",
	          "");
	I_Method1(void, setKeyframeContainer, IN, osgAnimation::TemplateSampler< osgAnimation::FloatCubicBezierInterpolator >::KeyframeContainerType *, kf,
	          Properties::NON_VIRTUAL,
	          __void__setKeyframeContainer__KeyframeContainerType_P1,
	          "",
	          "");
	I_Method0(osgAnimation::KeyframeContainer *, getKeyframeContainer,
	          Properties::VIRTUAL,
	          __KeyframeContainer_P1__getKeyframeContainer,
	          "",
	          "");
	I_Method0(const osgAnimation::KeyframeContainer *, getKeyframeContainer,
	          Properties::VIRTUAL,
	          __C5_KeyframeContainer_P1__getKeyframeContainer,
	          "",
	          "");
	I_Method0(osgAnimation::TemplateSampler< osgAnimation::FloatCubicBezierInterpolator >::KeyframeContainerType *, getKeyframeContainerTyped,
	          Properties::NON_VIRTUAL,
	          __KeyframeContainerType_P1__getKeyframeContainerTyped,
	          "",
	          "");
	I_Method0(const osgAnimation::TemplateSampler< osgAnimation::FloatCubicBezierInterpolator >::KeyframeContainerType *, getKeyframeContainerTyped,
	          Properties::NON_VIRTUAL,
	          __C5_KeyframeContainerType_P1__getKeyframeContainerTyped,
	          "",
	          "");
	I_Method0(osgAnimation::TemplateSampler< osgAnimation::FloatCubicBezierInterpolator >::KeyframeContainerType *, getOrCreateKeyframeContainer,
	          Properties::NON_VIRTUAL,
	          __KeyframeContainerType_P1__getOrCreateKeyframeContainer,
	          "",
	          "");
	I_Method0(float, getStartTime,
	          Properties::NON_VIRTUAL,
	          __float__getStartTime,
	          "",
	          "");
	I_Method0(float, getEndTime,
	          Properties::NON_VIRTUAL,
	          __float__getEndTime,
	          "",
	          "");
	I_SimpleProperty(float, EndTime, 
	                 __float__getEndTime, 
	                 0);
	I_SimpleProperty(osgAnimation::KeyframeContainer *, KeyframeContainer, 
	                 __KeyframeContainer_P1__getKeyframeContainer, 
	                 0);
	I_SimpleProperty(osgAnimation::TemplateSampler< osgAnimation::FloatCubicBezierInterpolator >::KeyframeContainerType *, KeyframeContainerTyped, 
	                 __KeyframeContainerType_P1__getKeyframeContainerTyped, 
	                 0);
	I_SimpleProperty(float, StartTime, 
	                 __float__getStartTime, 
	                 0);
END_REFLECTOR

BEGIN_OBJECT_REFLECTOR(osgAnimation::TemplateSampler< osgAnimation::FloatLinearInterpolator >)
	I_DeclaringFile("osgAnimation/Sampler");
	I_BaseType(osgAnimation::Sampler);
	I_Constructor0(____TemplateSampler,
	               "",
	               "");
	I_Method2(void, getValueAt, IN, float, time, IN, osgAnimation::TemplateSampler< osgAnimation::FloatLinearInterpolator >::UsingType &, result,
	          Properties::NON_VIRTUAL,
	          __void__getValueAt__float__UsingType_R1,
	          "",
	          "");
	I_Method1(void, setKeyframeContainer, IN, osgAnimation::TemplateSampler< osgAnimation::FloatLinearInterpolator >::KeyframeContainerType *, kf,
	          Properties::NON_VIRTUAL,
	          __void__setKeyframeContainer__KeyframeContainerType_P1,
	          "",
	          "");
	I_Method0(osgAnimation::KeyframeContainer *, getKeyframeContainer,
	          Properties::VIRTUAL,
	          __KeyframeContainer_P1__getKeyframeContainer,
	          "",
	          "");
	I_Method0(const osgAnimation::KeyframeContainer *, getKeyframeContainer,
	          Properties::VIRTUAL,
	          __C5_KeyframeContainer_P1__getKeyframeContainer,
	          "",
	          "");
	I_Method0(osgAnimation::TemplateSampler< osgAnimation::FloatLinearInterpolator >::KeyframeContainerType *, getKeyframeContainerTyped,
	          Properties::NON_VIRTUAL,
	          __KeyframeContainerType_P1__getKeyframeContainerTyped,
	          "",
	          "");
	I_Method0(const osgAnimation::TemplateSampler< osgAnimation::FloatLinearInterpolator >::KeyframeContainerType *, getKeyframeContainerTyped,
	          Properties::NON_VIRTUAL,
	          __C5_KeyframeContainerType_P1__getKeyframeContainerTyped,
	          "",
	          "");
	I_Method0(osgAnimation::TemplateSampler< osgAnimation::FloatLinearInterpolator >::KeyframeContainerType *, getOrCreateKeyframeContainer,
	          Properties::NON_VIRTUAL,
	          __KeyframeContainerType_P1__getOrCreateKeyframeContainer,
	          "",
	          "");
	I_Method0(float, getStartTime,
	          Properties::NON_VIRTUAL,
	          __float__getStartTime,
	          "",
	          "");
	I_Method0(float, getEndTime,
	          Properties::NON_VIRTUAL,
	          __float__getEndTime,
	          "",
	          "");
	I_SimpleProperty(float, EndTime, 
	                 __float__getEndTime, 
	                 0);
	I_SimpleProperty(osgAnimation::KeyframeContainer *, KeyframeContainer, 
	                 __KeyframeContainer_P1__getKeyframeContainer, 
	                 0);
	I_SimpleProperty(osgAnimation::TemplateSampler< osgAnimation::FloatLinearInterpolator >::KeyframeContainerType *, KeyframeContainerTyped, 
	                 __KeyframeContainerType_P1__getKeyframeContainerTyped, 
	                 0);
	I_SimpleProperty(float, StartTime, 
	                 __float__getStartTime, 
	                 0);
END_REFLECTOR

BEGIN_OBJECT_REFLECTOR(osgAnimation::TemplateSampler< osgAnimation::QuatSphericalLinearInterpolator >)
	I_DeclaringFile("osgAnimation/Sampler");
	I_BaseType(osgAnimation::Sampler);
	I_Constructor0(____TemplateSampler,
	               "",
	               "");
	I_Method2(void, getValueAt, IN, float, time, IN, osgAnimation::TemplateSampler< osgAnimation::QuatSphericalLinearInterpolator >::UsingType &, result,
	          Properties::NON_VIRTUAL,
	          __void__getValueAt__float__UsingType_R1,
	          "",
	          "");
	I_Method1(void, setKeyframeContainer, IN, osgAnimation::TemplateSampler< osgAnimation::QuatSphericalLinearInterpolator >::KeyframeContainerType *, kf,
	          Properties::NON_VIRTUAL,
	          __void__setKeyframeContainer__KeyframeContainerType_P1,
	          "",
	          "");
	I_Method0(osgAnimation::KeyframeContainer *, getKeyframeContainer,
	          Properties::VIRTUAL,
	          __KeyframeContainer_P1__getKeyframeContainer,
	          "",
	          "");
	I_Method0(const osgAnimation::KeyframeContainer *, getKeyframeContainer,
	          Properties::VIRTUAL,
	          __C5_KeyframeContainer_P1__getKeyframeContainer,
	          "",
	          "");
	I_Method0(osgAnimation::TemplateSampler< osgAnimation::QuatSphericalLinearInterpolator >::KeyframeContainerType *, getKeyframeContainerTyped,
	          Properties::NON_VIRTUAL,
	          __KeyframeContainerType_P1__getKeyframeContainerTyped,
	          "",
	          "");
	I_Method0(const osgAnimation::TemplateSampler< osgAnimation::QuatSphericalLinearInterpolator >::KeyframeContainerType *, getKeyframeContainerTyped,
	          Properties::NON_VIRTUAL,
	          __C5_KeyframeContainerType_P1__getKeyframeContainerTyped,
	          "",
	          "");
	I_Method0(osgAnimation::TemplateSampler< osgAnimation::QuatSphericalLinearInterpolator >::KeyframeContainerType *, getOrCreateKeyframeContainer,
	          Properties::NON_VIRTUAL,
	          __KeyframeContainerType_P1__getOrCreateKeyframeContainer,
	          "",
	          "");
	I_Method0(float, getStartTime,
	          Properties::NON_VIRTUAL,
	          __float__getStartTime,
	          "",
	          "");
	I_Method0(float, getEndTime,
	          Properties::NON_VIRTUAL,
	          __float__getEndTime,
	          "",
	          "");
	I_SimpleProperty(float, EndTime, 
	                 __float__getEndTime, 
	                 0);
	I_SimpleProperty(osgAnimation::KeyframeContainer *, KeyframeContainer, 
	                 __KeyframeContainer_P1__getKeyframeContainer, 
	                 0);
	I_SimpleProperty(osgAnimation::TemplateSampler< osgAnimation::QuatSphericalLinearInterpolator >::KeyframeContainerType *, KeyframeContainerTyped, 
	                 __KeyframeContainerType_P1__getKeyframeContainerTyped, 
	                 0);
	I_SimpleProperty(float, StartTime, 
	                 __float__getStartTime, 
	                 0);
END_REFLECTOR

BEGIN_OBJECT_REFLECTOR(osgAnimation::TemplateSampler< osgAnimation::Vec2CubicBezierInterpolator >)
	I_DeclaringFile("osgAnimation/Sampler");
	I_BaseType(osgAnimation::Sampler);
	I_Constructor0(____TemplateSampler,
	               "",
	               "");
	I_Method2(void, getValueAt, IN, float, time, IN, osgAnimation::TemplateSampler< osgAnimation::Vec2CubicBezierInterpolator >::UsingType &, result,
	          Properties::NON_VIRTUAL,
	          __void__getValueAt__float__UsingType_R1,
	          "",
	          "");
	I_Method1(void, setKeyframeContainer, IN, osgAnimation::TemplateSampler< osgAnimation::Vec2CubicBezierInterpolator >::KeyframeContainerType *, kf,
	          Properties::NON_VIRTUAL,
	          __void__setKeyframeContainer__KeyframeContainerType_P1,
	          "",
	          "");
	I_Method0(osgAnimation::KeyframeContainer *, getKeyframeContainer,
	          Properties::VIRTUAL,
	          __KeyframeContainer_P1__getKeyframeContainer,
	          "",
	          "");
	I_Method0(const osgAnimation::KeyframeContainer *, getKeyframeContainer,
	          Properties::VIRTUAL,
	          __C5_KeyframeContainer_P1__getKeyframeContainer,
	          "",
	          "");
	I_Method0(osgAnimation::TemplateSampler< osgAnimation::Vec2CubicBezierInterpolator >::KeyframeContainerType *, getKeyframeContainerTyped,
	          Properties::NON_VIRTUAL,
	          __KeyframeContainerType_P1__getKeyframeContainerTyped,
	          "",
	          "");
	I_Method0(const osgAnimation::TemplateSampler< osgAnimation::Vec2CubicBezierInterpolator >::KeyframeContainerType *, getKeyframeContainerTyped,
	          Properties::NON_VIRTUAL,
	          __C5_KeyframeContainerType_P1__getKeyframeContainerTyped,
	          "",
	          "");
	I_Method0(osgAnimation::TemplateSampler< osgAnimation::Vec2CubicBezierInterpolator >::KeyframeContainerType *, getOrCreateKeyframeContainer,
	          Properties::NON_VIRTUAL,
	          __KeyframeContainerType_P1__getOrCreateKeyframeContainer,
	          "",
	          "");
	I_Method0(float, getStartTime,
	          Properties::NON_VIRTUAL,
	          __float__getStartTime,
	          "",
	          "");
	I_Method0(float, getEndTime,
	          Properties::NON_VIRTUAL,
	          __float__getEndTime,
	          "",
	          "");
	I_SimpleProperty(float, EndTime, 
	                 __float__getEndTime, 
	                 0);
	I_SimpleProperty(osgAnimation::KeyframeContainer *, KeyframeContainer, 
	                 __KeyframeContainer_P1__getKeyframeContainer, 
	                 0);
	I_SimpleProperty(osgAnimation::TemplateSampler< osgAnimation::Vec2CubicBezierInterpolator >::KeyframeContainerType *, KeyframeContainerTyped, 
	                 __KeyframeContainerType_P1__getKeyframeContainerTyped, 
	                 0);
	I_SimpleProperty(float, StartTime, 
	                 __float__getStartTime, 
	                 0);
END_REFLECTOR

BEGIN_OBJECT_REFLECTOR(osgAnimation::TemplateSampler< osgAnimation::Vec2LinearInterpolator >)
	I_DeclaringFile("osgAnimation/Sampler");
	I_BaseType(osgAnimation::Sampler);
	I_Constructor0(____TemplateSampler,
	               "",
	               "");
	I_Method2(void, getValueAt, IN, float, time, IN, osgAnimation::TemplateSampler< osgAnimation::Vec2LinearInterpolator >::UsingType &, result,
	          Properties::NON_VIRTUAL,
	          __void__getValueAt__float__UsingType_R1,
	          "",
	          "");
	I_Method1(void, setKeyframeContainer, IN, osgAnimation::TemplateSampler< osgAnimation::Vec2LinearInterpolator >::KeyframeContainerType *, kf,
	          Properties::NON_VIRTUAL,
	          __void__setKeyframeContainer__KeyframeContainerType_P1,
	          "",
	          "");
	I_Method0(osgAnimation::KeyframeContainer *, getKeyframeContainer,
	          Properties::VIRTUAL,
	          __KeyframeContainer_P1__getKeyframeContainer,
	          "",
	          "");
	I_Method0(const osgAnimation::KeyframeContainer *, getKeyframeContainer,
	          Properties::VIRTUAL,
	          __C5_KeyframeContainer_P1__getKeyframeContainer,
	          "",
	          "");
	I_Method0(osgAnimation::TemplateSampler< osgAnimation::Vec2LinearInterpolator >::KeyframeContainerType *, getKeyframeContainerTyped,
	          Properties::NON_VIRTUAL,
	          __KeyframeContainerType_P1__getKeyframeContainerTyped,
	          "",
	          "");
	I_Method0(const osgAnimation::TemplateSampler< osgAnimation::Vec2LinearInterpolator >::KeyframeContainerType *, getKeyframeContainerTyped,
	          Properties::NON_VIRTUAL,
	          __C5_KeyframeContainerType_P1__getKeyframeContainerTyped,
	          "",
	          "");
	I_Method0(osgAnimation::TemplateSampler< osgAnimation::Vec2LinearInterpolator >::KeyframeContainerType *, getOrCreateKeyframeContainer,
	          Properties::NON_VIRTUAL,
	          __KeyframeContainerType_P1__getOrCreateKeyframeContainer,
	          "",
	          "");
	I_Method0(float, getStartTime,
	          Properties::NON_VIRTUAL,
	          __float__getStartTime,
	          "",
	          "");
	I_Method0(float, getEndTime,
	          Properties::NON_VIRTUAL,
	          __float__getEndTime,
	          "",
	          "");
	I_SimpleProperty(float, EndTime, 
	                 __float__getEndTime, 
	                 0);
	I_SimpleProperty(osgAnimation::KeyframeContainer *, KeyframeContainer, 
	                 __KeyframeContainer_P1__getKeyframeContainer, 
	                 0);
	I_SimpleProperty(osgAnimation::TemplateSampler< osgAnimation::Vec2LinearInterpolator >::KeyframeContainerType *, KeyframeContainerTyped, 
	                 __KeyframeContainerType_P1__getKeyframeContainerTyped, 
	                 0);
	I_SimpleProperty(float, StartTime, 
	                 __float__getStartTime, 
	                 0);
END_REFLECTOR

BEGIN_OBJECT_REFLECTOR(osgAnimation::TemplateSampler< osgAnimation::Vec3CubicBezierInterpolator >)
	I_DeclaringFile("osgAnimation/Sampler");
	I_BaseType(osgAnimation::Sampler);
	I_Constructor0(____TemplateSampler,
	               "",
	               "");
	I_Method2(void, getValueAt, IN, float, time, IN, osgAnimation::TemplateSampler< osgAnimation::Vec3CubicBezierInterpolator >::UsingType &, result,
	          Properties::NON_VIRTUAL,
	          __void__getValueAt__float__UsingType_R1,
	          "",
	          "");
	I_Method1(void, setKeyframeContainer, IN, osgAnimation::TemplateSampler< osgAnimation::Vec3CubicBezierInterpolator >::KeyframeContainerType *, kf,
	          Properties::NON_VIRTUAL,
	          __void__setKeyframeContainer__KeyframeContainerType_P1,
	          "",
	          "");
	I_Method0(osgAnimation::KeyframeContainer *, getKeyframeContainer,
	          Properties::VIRTUAL,
	          __KeyframeContainer_P1__getKeyframeContainer,
	          "",
	          "");
	I_Method0(const osgAnimation::KeyframeContainer *, getKeyframeContainer,
	          Properties::VIRTUAL,
	          __C5_KeyframeContainer_P1__getKeyframeContainer,
	          "",
	          "");
	I_Method0(osgAnimation::TemplateSampler< osgAnimation::Vec3CubicBezierInterpolator >::KeyframeContainerType *, getKeyframeContainerTyped,
	          Properties::NON_VIRTUAL,
	          __KeyframeContainerType_P1__getKeyframeContainerTyped,
	          "",
	          "");
	I_Method0(const osgAnimation::TemplateSampler< osgAnimation::Vec3CubicBezierInterpolator >::KeyframeContainerType *, getKeyframeContainerTyped,
	          Properties::NON_VIRTUAL,
	          __C5_KeyframeContainerType_P1__getKeyframeContainerTyped,
	          "",
	          "");
	I_Method0(osgAnimation::TemplateSampler< osgAnimation::Vec3CubicBezierInterpolator >::KeyframeContainerType *, getOrCreateKeyframeContainer,
	          Properties::NON_VIRTUAL,
	          __KeyframeContainerType_P1__getOrCreateKeyframeContainer,
	          "",
	          "");
	I_Method0(float, getStartTime,
	          Properties::NON_VIRTUAL,
	          __float__getStartTime,
	          "",
	          "");
	I_Method0(float, getEndTime,
	          Properties::NON_VIRTUAL,
	          __float__getEndTime,
	          "",
	          "");
	I_SimpleProperty(float, EndTime, 
	                 __float__getEndTime, 
	                 0);
	I_SimpleProperty(osgAnimation::KeyframeContainer *, KeyframeContainer, 
	                 __KeyframeContainer_P1__getKeyframeContainer, 
	                 0);
	I_SimpleProperty(osgAnimation::TemplateSampler< osgAnimation::Vec3CubicBezierInterpolator >::KeyframeContainerType *, KeyframeContainerTyped, 
	                 __KeyframeContainerType_P1__getKeyframeContainerTyped, 
	                 0);
	I_SimpleProperty(float, StartTime, 
	                 __float__getStartTime, 
	                 0);
END_REFLECTOR

BEGIN_OBJECT_REFLECTOR(osgAnimation::TemplateSampler< osgAnimation::Vec3LinearInterpolator >)
	I_DeclaringFile("osgAnimation/Sampler");
	I_BaseType(osgAnimation::Sampler);
	I_Constructor0(____TemplateSampler,
	               "",
	               "");
	I_Method2(void, getValueAt, IN, float, time, IN, osgAnimation::TemplateSampler< osgAnimation::Vec3LinearInterpolator >::UsingType &, result,
	          Properties::NON_VIRTUAL,
	          __void__getValueAt__float__UsingType_R1,
	          "",
	          "");
	I_Method1(void, setKeyframeContainer, IN, osgAnimation::TemplateSampler< osgAnimation::Vec3LinearInterpolator >::KeyframeContainerType *, kf,
	          Properties::NON_VIRTUAL,
	          __void__setKeyframeContainer__KeyframeContainerType_P1,
	          "",
	          "");
	I_Method0(osgAnimation::KeyframeContainer *, getKeyframeContainer,
	          Properties::VIRTUAL,
	          __KeyframeContainer_P1__getKeyframeContainer,
	          "",
	          "");
	I_Method0(const osgAnimation::KeyframeContainer *, getKeyframeContainer,
	          Properties::VIRTUAL,
	          __C5_KeyframeContainer_P1__getKeyframeContainer,
	          "",
	          "");
	I_Method0(osgAnimation::TemplateSampler< osgAnimation::Vec3LinearInterpolator >::KeyframeContainerType *, getKeyframeContainerTyped,
	          Properties::NON_VIRTUAL,
	          __KeyframeContainerType_P1__getKeyframeContainerTyped,
	          "",
	          "");
	I_Method0(const osgAnimation::TemplateSampler< osgAnimation::Vec3LinearInterpolator >::KeyframeContainerType *, getKeyframeContainerTyped,
	          Properties::NON_VIRTUAL,
	          __C5_KeyframeContainerType_P1__getKeyframeContainerTyped,
	          "",
	          "");
	I_Method0(osgAnimation::TemplateSampler< osgAnimation::Vec3LinearInterpolator >::KeyframeContainerType *, getOrCreateKeyframeContainer,
	          Properties::NON_VIRTUAL,
	          __KeyframeContainerType_P1__getOrCreateKeyframeContainer,
	          "",
	          "");
	I_Method0(float, getStartTime,
	          Properties::NON_VIRTUAL,
	          __float__getStartTime,
	          "",
	          "");
	I_Method0(float, getEndTime,
	          Properties::NON_VIRTUAL,
	          __float__getEndTime,
	          "",
	          "");
	I_SimpleProperty(float, EndTime, 
	                 __float__getEndTime, 
	                 0);
	I_SimpleProperty(osgAnimation::KeyframeContainer *, KeyframeContainer, 
	                 __KeyframeContainer_P1__getKeyframeContainer, 
	                 0);
	I_SimpleProperty(osgAnimation::TemplateSampler< osgAnimation::Vec3LinearInterpolator >::KeyframeContainerType *, KeyframeContainerTyped, 
	                 __KeyframeContainerType_P1__getKeyframeContainerTyped, 
	                 0);
	I_SimpleProperty(float, StartTime, 
	                 __float__getStartTime, 
	                 0);
END_REFLECTOR

BEGIN_OBJECT_REFLECTOR(osgAnimation::TemplateSampler< osgAnimation::Vec4CubicBezierInterpolator >)
	I_DeclaringFile("osgAnimation/Sampler");
	I_BaseType(osgAnimation::Sampler);
	I_Constructor0(____TemplateSampler,
	               "",
	               "");
	I_Method2(void, getValueAt, IN, float, time, IN, osgAnimation::TemplateSampler< osgAnimation::Vec4CubicBezierInterpolator >::UsingType &, result,
	          Properties::NON_VIRTUAL,
	          __void__getValueAt__float__UsingType_R1,
	          "",
	          "");
	I_Method1(void, setKeyframeContainer, IN, osgAnimation::TemplateSampler< osgAnimation::Vec4CubicBezierInterpolator >::KeyframeContainerType *, kf,
	          Properties::NON_VIRTUAL,
	          __void__setKeyframeContainer__KeyframeContainerType_P1,
	          "",
	          "");
	I_Method0(osgAnimation::KeyframeContainer *, getKeyframeContainer,
	          Properties::VIRTUAL,
	          __KeyframeContainer_P1__getKeyframeContainer,
	          "",
	          "");
	I_Method0(const osgAnimation::KeyframeContainer *, getKeyframeContainer,
	          Properties::VIRTUAL,
	          __C5_KeyframeContainer_P1__getKeyframeContainer,
	          "",
	          "");
	I_Method0(osgAnimation::TemplateSampler< osgAnimation::Vec4CubicBezierInterpolator >::KeyframeContainerType *, getKeyframeContainerTyped,
	          Properties::NON_VIRTUAL,
	          __KeyframeContainerType_P1__getKeyframeContainerTyped,
	          "",
	          "");
	I_Method0(const osgAnimation::TemplateSampler< osgAnimation::Vec4CubicBezierInterpolator >::KeyframeContainerType *, getKeyframeContainerTyped,
	          Properties::NON_VIRTUAL,
	          __C5_KeyframeContainerType_P1__getKeyframeContainerTyped,
	          "",
	          "");
	I_Method0(osgAnimation::TemplateSampler< osgAnimation::Vec4CubicBezierInterpolator >::KeyframeContainerType *, getOrCreateKeyframeContainer,
	          Properties::NON_VIRTUAL,
	          __KeyframeContainerType_P1__getOrCreateKeyframeContainer,
	          "",
	          "");
	I_Method0(float, getStartTime,
	          Properties::NON_VIRTUAL,
	          __float__getStartTime,
	          "",
	          "");
	I_Method0(float, getEndTime,
	          Properties::NON_VIRTUAL,
	          __float__getEndTime,
	          "",
	          "");
	I_SimpleProperty(float, EndTime, 
	                 __float__getEndTime, 
	                 0);
	I_SimpleProperty(osgAnimation::KeyframeContainer *, KeyframeContainer, 
	                 __KeyframeContainer_P1__getKeyframeContainer, 
	                 0);
	I_SimpleProperty(osgAnimation::TemplateSampler< osgAnimation::Vec4CubicBezierInterpolator >::KeyframeContainerType *, KeyframeContainerTyped, 
	                 __KeyframeContainerType_P1__getKeyframeContainerTyped, 
	                 0);
	I_SimpleProperty(float, StartTime, 
	                 __float__getStartTime, 
	                 0);
END_REFLECTOR

BEGIN_OBJECT_REFLECTOR(osgAnimation::TemplateSampler< osgAnimation::Vec4LinearInterpolator >)
	I_DeclaringFile("osgAnimation/Sampler");
	I_BaseType(osgAnimation::Sampler);
	I_Constructor0(____TemplateSampler,
	               "",
	               "");
	I_Method2(void, getValueAt, IN, float, time, IN, osgAnimation::TemplateSampler< osgAnimation::Vec4LinearInterpolator >::UsingType &, result,
	          Properties::NON_VIRTUAL,
	          __void__getValueAt__float__UsingType_R1,
	          "",
	          "");
	I_Method1(void, setKeyframeContainer, IN, osgAnimation::TemplateSampler< osgAnimation::Vec4LinearInterpolator >::KeyframeContainerType *, kf,
	          Properties::NON_VIRTUAL,
	          __void__setKeyframeContainer__KeyframeContainerType_P1,
	          "",
	          "");
	I_Method0(osgAnimation::KeyframeContainer *, getKeyframeContainer,
	          Properties::VIRTUAL,
	          __KeyframeContainer_P1__getKeyframeContainer,
	          "",
	          "");
	I_Method0(const osgAnimation::KeyframeContainer *, getKeyframeContainer,
	          Properties::VIRTUAL,
	          __C5_KeyframeContainer_P1__getKeyframeContainer,
	          "",
	          "");
	I_Method0(osgAnimation::TemplateSampler< osgAnimation::Vec4LinearInterpolator >::KeyframeContainerType *, getKeyframeContainerTyped,
	          Properties::NON_VIRTUAL,
	          __KeyframeContainerType_P1__getKeyframeContainerTyped,
	          "",
	          "");
	I_Method0(const osgAnimation::TemplateSampler< osgAnimation::Vec4LinearInterpolator >::KeyframeContainerType *, getKeyframeContainerTyped,
	          Properties::NON_VIRTUAL,
	          __C5_KeyframeContainerType_P1__getKeyframeContainerTyped,
	          "",
	          "");
	I_Method0(osgAnimation::TemplateSampler< osgAnimation::Vec4LinearInterpolator >::KeyframeContainerType *, getOrCreateKeyframeContainer,
	          Properties::NON_VIRTUAL,
	          __KeyframeContainerType_P1__getOrCreateKeyframeContainer,
	          "",
	          "");
	I_Method0(float, getStartTime,
	          Properties::NON_VIRTUAL,
	          __float__getStartTime,
	          "",
	          "");
	I_Method0(float, getEndTime,
	          Properties::NON_VIRTUAL,
	          __float__getEndTime,
	          "",
	          "");
	I_SimpleProperty(float, EndTime, 
	                 __float__getEndTime, 
	                 0);
	I_SimpleProperty(osgAnimation::KeyframeContainer *, KeyframeContainer, 
	                 __KeyframeContainer_P1__getKeyframeContainer, 
	                 0);
	I_SimpleProperty(osgAnimation::TemplateSampler< osgAnimation::Vec4LinearInterpolator >::KeyframeContainerType *, KeyframeContainerTyped, 
	                 __KeyframeContainerType_P1__getKeyframeContainerTyped, 
	                 0);
	I_SimpleProperty(float, StartTime, 
	                 __float__getStartTime, 
	                 0);
END_REFLECTOR

