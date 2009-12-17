' osg openthread module import list

Strict

ModuleInfo "CC_OPTS: -fexceptions" 
ModuleInfo "CC_OPTS: -DOT_LIBRARY_STATIC"
ModuleInfo "CC_OPTS: -DOSG_LIBRARY_STATIC"
?Win32
ModuleInfo "CC_OPTS: -D_GLIBCXX_USE_WCHAR_T"
?

Import "../osg.mod/include/*.h"

Import "../osg.mod/src/osgGA/AnimationPathManipulator.cpp"
Import "../osg.mod/src/osgGA/CameraViewSwitchManipulator.cpp"
Import "../osg.mod/src/osgGA/DriveManipulator.cpp"
Import "../osg.mod/src/osgGA/EventQueue.cpp"
Import "../osg.mod/src/osgGA/EventVisitor.cpp"
Import "../osg.mod/src/osgGA/FlightManipulator.cpp"
Import "../osg.mod/src/osgGA/GUIEventAdapter.cpp"
Import "../osg.mod/src/osgGA/GUIEventHandler.cpp"
Import "../osg.mod/src/osgGA/KeySwitchMatrixManipulator.cpp"
Import "../osg.mod/src/osgGA/MatrixManipulator.cpp"
Import "../osg.mod/src/osgGA/NodeTrackerManipulator.cpp"
Import "../osg.mod/src/osgGA/StateSetManipulator.cpp"
Import "../osg.mod/src/osgGA/TerrainManipulator.cpp"
Import "../osg.mod/src/osgGA/TrackballManipulator.cpp"
Import "../osg.mod/src/osgGA/UFOManipulator.cpp"
Import "../osg.mod/src/osgGA/Version.cpp"
