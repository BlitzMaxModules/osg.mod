' osg module import list

Strict

ModuleInfo "CC_OPTS: -fexceptions" 
ModuleInfo "CC_OPTS: -DOT_LIBRARY_STATIC"
ModuleInfo "CC_OPTS: -DOSG_LIBRARY_STATIC"
?Win32
ModuleInfo "CC_OPTS: -D_GLIBCXX_USE_WCHAR_T"
?

Import "../osg.mod/include/*.h"

Import "../osg.mod/src/osgManipulator/AntiSquish.cpp"
Import "../osg.mod/src/osgManipulator/Command.cpp"
Import "../osg.mod/src/osgManipulator/CommandManager.cpp"
Import "../osg.mod/src/osgManipulator/Constraint.cpp"
Import "../osg.mod/src/osgManipulator/Dragger.cpp"
Import "../osg.mod/src/osgManipulator/Projector.cpp"
Import "../osg.mod/src/osgManipulator/RotateCylinderDragger.cpp"
Import "../osg.mod/src/osgManipulator/RotateSphereDragger.cpp"
Import "../osg.mod/src/osgManipulator/Scale1DDragger.cpp"
Import "../osg.mod/src/osgManipulator/Scale2DDragger.cpp"
Import "../osg.mod/src/osgManipulator/ScaleAxisDragger.cpp"
Import "../osg.mod/src/osgManipulator/Selection.cpp"
Import "../osg.mod/src/osgManipulator/TabBoxDragger.cpp"
Import "../osg.mod/src/osgManipulator/TabPlaneDragger.cpp"
Import "../osg.mod/src/osgManipulator/TabPlaneTrackballDragger.cpp"
Import "../osg.mod/src/osgManipulator/TrackballDragger.cpp"
Import "../osg.mod/src/osgManipulator/Translate1DDragger.cpp"
Import "../osg.mod/src/osgManipulator/Translate2DDragger.cpp"
Import "../osg.mod/src/osgManipulator/TranslateAxisDragger.cpp"
Import "../osg.mod/src/osgManipulator/TranslatePlaneDragger.cpp"
Import "../osg.mod/src/osgManipulator/Version.cpp"
