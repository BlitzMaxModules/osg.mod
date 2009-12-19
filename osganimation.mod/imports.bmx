' osg module import list

Strict

ModuleInfo "CC_OPTS: -fexceptions" 
ModuleInfo "CC_OPTS: -DOT_LIBRARY_STATIC"
ModuleInfo "CC_OPTS: -DOSG_LIBRARY_STATIC"
?Win32
ModuleInfo "CC_OPTS: -D_GLIBCXX_USE_WCHAR_T"
?

Import "../osg.mod/include/*.h"

Import "../osg.mod/src/osgAnimation/Animation.cpp"
Import "../osg.mod/src/osgAnimation/AnimationManager.cpp"
Import "../osg.mod/src/osgAnimation/AnimationManagerBase.cpp"
Import "../osg.mod/src/osgAnimation/BasicAnimationManager.cpp"
Import "../osg.mod/src/osgAnimation/Bone.cpp"
Import "../osg.mod/src/osgAnimation/Channel.cpp"
Import "../osg.mod/src/osgAnimation/RigGeometry.cpp"
Import "../osg.mod/src/osgAnimation/Skeleton.cpp"
Import "../osg.mod/src/osgAnimation/Target.cpp"
Import "../osg.mod/src/osgAnimation/Timeline.cpp"
Import "../osg.mod/src/osgAnimation/TimelineAnimationManager.cpp"
Import "../osg.mod/src/osgAnimation/UpdateCallback.cpp"
Import "../osg.mod/src/osgAnimation/VertexInfluence.cpp"

