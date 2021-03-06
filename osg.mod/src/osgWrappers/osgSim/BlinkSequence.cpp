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

#include <osg/CopyOp>
#include <osg/Object>
#include <osg/Vec4>
#include <osgSim/BlinkSequence>

// Must undefine IN and OUT macros defined in Windows headers
#ifdef IN
#undef IN
#endif
#ifdef OUT
#undef OUT
#endif

BEGIN_OBJECT_REFLECTOR(osgSim::BlinkSequence)
	I_DeclaringFile("osgSim/BlinkSequence");
	I_BaseType(osg::Object);
	I_Constructor0(____BlinkSequence,
	               "",
	               "");
	I_ConstructorWithDefaults2(IN, const osgSim::BlinkSequence &, bs, , IN, const osg::CopyOp &, copyop, osg::CopyOp::SHALLOW_COPY,
	                           ____BlinkSequence__C5_BlinkSequence_R1__C5_osg_CopyOp_R1,
	                           "",
	                           "");
	I_Method0(osg::Object *, cloneType,
	          Properties::VIRTUAL,
	          __osg_Object_P1__cloneType,
	          "Clone the type of an object, with Object* return type. ",
	          "Must be defined by derived classes. ");
	I_Method1(osg::Object *, clone, IN, const osg::CopyOp &, x,
	          Properties::VIRTUAL,
	          __osg_Object_P1__clone__C5_osg_CopyOp_R1,
	          "Clone an object, with Object* return type. ",
	          "Must be defined by derived classes. ");
	I_Method1(bool, isSameKindAs, IN, const osg::Object *, obj,
	          Properties::VIRTUAL,
	          __bool__isSameKindAs__C5_osg_Object_P1,
	          "",
	          "");
	I_Method0(const char *, libraryName,
	          Properties::VIRTUAL,
	          __C5_char_P1__libraryName,
	          "return the name of the object's library. ",
	          "Must be defined by derived classes. The OpenSceneGraph convention is that the namespace of a library is the same as the library name. ");
	I_Method0(const char *, className,
	          Properties::VIRTUAL,
	          __C5_char_P1__className,
	          "return the name of the object's class type. ",
	          "Must be defined by derived classes. ");
	I_Method2(void, addPulse, IN, double, length, IN, const osg::Vec4 &, color,
	          Properties::NON_VIRTUAL,
	          __void__addPulse__double__C5_osg_Vec4_R1,
	          "add a pulse of specified color and duration to the BlinkSequence. ",
	          "");
	I_Method0(int, getNumPulses,
	          Properties::NON_VIRTUAL,
	          __int__getNumPulses,
	          "return the number of pulses. ",
	          "");
	I_Method3(void, getPulse, IN, unsigned int, i, IN, double &, length, IN, osg::Vec4 &, color,
	          Properties::NON_VIRTUAL,
	          __void__getPulse__unsigned_int__double_R1__osg_Vec4_R1,
	          "return the pulse data at position i. ",
	          "");
	I_Method3(void, setPulse, IN, unsigned int, i, IN, double, length, IN, const osg::Vec4 &, color,
	          Properties::NON_VIRTUAL,
	          __void__setPulse__unsigned_int__double__C5_osg_Vec4_R1,
	          "set pulse of specified color and duration to the BlinkSequence. ",
	          "");
	I_Method0(double, getPulsePeriod,
	          Properties::NON_VIRTUAL,
	          __double__getPulsePeriod,
	          "get the total pulse period of the blink sequence, which is equal to the sum of all the pulse periods. ",
	          "");
	I_Method1(void, setSequenceGroup, IN, osgSim::SequenceGroup *, sg,
	          Properties::NON_VIRTUAL,
	          __void__setSequenceGroup__SequenceGroup_P1,
	          "set the sequence group which can be used to synchronize related blink sequences. ",
	          "");
	I_Method0(osgSim::SequenceGroup *, getSequenceGroup,
	          Properties::NON_VIRTUAL,
	          __SequenceGroup_P1__getSequenceGroup,
	          "get the non const sequence group. ",
	          "");
	I_Method0(const osgSim::SequenceGroup *, getSequenceGroup,
	          Properties::NON_VIRTUAL,
	          __C5_SequenceGroup_P1__getSequenceGroup,
	          "get the const sequence group. ",
	          "");
	I_Method1(void, setPhaseShift, IN, double, ps,
	          Properties::NON_VIRTUAL,
	          __void__setPhaseShift__double,
	          "set the phase shift of the blink sequence, this would be used to shift a sequence within a sequence group. ",
	          "");
	I_Method0(double, getPhaseShift,
	          Properties::NON_VIRTUAL,
	          __double__getPhaseShift,
	          "get the pahse shift. ",
	          "");
	I_Method1(double, localTime, IN, double, time,
	          Properties::NON_VIRTUAL,
	          __double__localTime__double,
	          "compute the local time clamped to this BlinkSequences period, and accounting for the phase shift and sequence group. ",
	          "");
	I_Method2(osg::Vec4, color, IN, double, time, IN, double, length,
	          Properties::NON_VIRTUAL,
	          __osg_Vec4__color__double__double,
	          "compute the color for the time interval sepecifed. ",
	          "Averages the colors if the length is greater than the current pulse. ");
	I_SimpleProperty(double, PhaseShift, 
	                 __double__getPhaseShift, 
	                 __void__setPhaseShift__double);
	I_SimpleProperty(double, PulsePeriod, 
	                 __double__getPulsePeriod, 
	                 0);
	I_SimpleProperty(osgSim::SequenceGroup *, SequenceGroup, 
	                 __SequenceGroup_P1__getSequenceGroup, 
	                 __void__setSequenceGroup__SequenceGroup_P1);
END_REFLECTOR

BEGIN_OBJECT_REFLECTOR(osgSim::SequenceGroup)
	I_DeclaringFile("osgSim/BlinkSequence");
	I_BaseType(osg::Object);
	I_Constructor0(____SequenceGroup,
	               "",
	               "");
	I_ConstructorWithDefaults2(IN, const osgSim::SequenceGroup &, bs, , IN, const osg::CopyOp &, copyop, osg::CopyOp::SHALLOW_COPY,
	                           ____SequenceGroup__C5_SequenceGroup_R1__C5_osg_CopyOp_R1,
	                           "",
	                           "");
	I_Constructor1(IN, double, baseTime,
	               Properties::NON_EXPLICIT,
	               ____SequenceGroup__double,
	               "",
	               "");
	I_Method0(osg::Object *, cloneType,
	          Properties::VIRTUAL,
	          __osg_Object_P1__cloneType,
	          "Clone the type of an object, with Object* return type. ",
	          "Must be defined by derived classes. ");
	I_Method1(osg::Object *, clone, IN, const osg::CopyOp &, x,
	          Properties::VIRTUAL,
	          __osg_Object_P1__clone__C5_osg_CopyOp_R1,
	          "Clone an object, with Object* return type. ",
	          "Must be defined by derived classes. ");
	I_Method1(bool, isSameKindAs, IN, const osg::Object *, obj,
	          Properties::VIRTUAL,
	          __bool__isSameKindAs__C5_osg_Object_P1,
	          "",
	          "");
	I_Method0(const char *, libraryName,
	          Properties::VIRTUAL,
	          __C5_char_P1__libraryName,
	          "return the name of the object's library. ",
	          "Must be defined by derived classes. The OpenSceneGraph convention is that the namespace of a library is the same as the library name. ");
	I_Method0(const char *, className,
	          Properties::VIRTUAL,
	          __C5_char_P1__className,
	          "return the name of the object's class type. ",
	          "Must be defined by derived classes. ");
	I_PublicMemberProperty(double, _baseTime);
END_REFLECTOR

