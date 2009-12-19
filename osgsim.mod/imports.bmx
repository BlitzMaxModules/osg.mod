' osg module import list

Strict

ModuleInfo "CC_OPTS: -fexceptions" 
ModuleInfo "CC_OPTS: -DOT_LIBRARY_STATIC"
ModuleInfo "CC_OPTS: -DOSG_LIBRARY_STATIC"
?Win32
ModuleInfo "CC_OPTS: -D_GLIBCXX_USE_WCHAR_T"
?

Import "../osg.mod/include/*.h"

Import "../osg.mod/src/osgSim/BlinkSequence.cpp"
Import "../osg.mod/src/osgSim/ColorRange.cpp"
Import "../osg.mod/src/osgSim/DOFTransform.cpp"
Import "../osg.mod/src/osgSim/ElevationSlice.cpp"
Import "../osg.mod/src/osgSim/HeightAboveTerrain.cpp"
Import "../osg.mod/src/osgSim/Impostor.cpp"
Import "../osg.mod/src/osgSim/ImpostorSprite.cpp"
Import "../osg.mod/src/osgSim/InsertImpostorsVisitor.cpp"
Import "../osg.mod/src/osgSim/LightPoint.cpp"
Import "../osg.mod/src/osgSim/LightPointDrawable.cpp"
Import "../osg.mod/src/osgSim/LightPointNode.cpp"
Import "../osg.mod/src/osgSim/LightPointSpriteDrawable.cpp"
Import "../osg.mod/src/osgSim/LineOfSight.cpp"
Import "../osg.mod/src/osgSim/MultiSwitch.cpp"
Import "../osg.mod/src/osgSim/OverlayNode.cpp"
Import "../osg.mod/src/osgSim/ScalarBar.cpp"
Import "../osg.mod/src/osgSim/ScalarsToColors.cpp"
Import "../osg.mod/src/osgSim/Sector.cpp"
Import "../osg.mod/src/osgSim/ShapeAttribute.cpp"
Import "../osg.mod/src/osgSim/SphereSegment.cpp"
Import "../osg.mod/src/osgSim/Version.cpp"
Import "../osg.mod/src/osgSim/VisibilityGroup.cpp"
