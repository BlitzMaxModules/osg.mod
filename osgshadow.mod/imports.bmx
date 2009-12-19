' osg module import list

Strict

ModuleInfo "CC_OPTS: -fexceptions" 
ModuleInfo "CC_OPTS: -DOT_LIBRARY_STATIC"
ModuleInfo "CC_OPTS: -DOSG_LIBRARY_STATIC"
?Win32
ModuleInfo "CC_OPTS: -D_GLIBCXX_USE_WCHAR_T"
?

Import "../osg.mod/include/*.h"

Import "../osg.mod/src/osgShadow/ConvexPolyhedron.cpp"
Import "../osg.mod/src/osgShadow/DebugShadowMap.cpp"
Import "../osg.mod/src/osgShadow/LightSpacePerspectiveShadowMap.cpp"
Import "../osg.mod/src/osgShadow/MinimalCullBoundsShadowMap.cpp"
Import "../osg.mod/src/osgShadow/MinimalDrawBoundsShadowMap.cpp"
Import "../osg.mod/src/osgShadow/MinimalShadowMap.cpp"
Import "../osg.mod/src/osgShadow/OccluderGeometry.cpp"
Import "../osg.mod/src/osgShadow/ParallelSplitShadowMap.cpp"
Import "../osg.mod/src/osgShadow/ShadowedScene.cpp"
Import "../osg.mod/src/osgShadow/ShadowMap.cpp"
Import "../osg.mod/src/osgShadow/ShadowTechnique.cpp"
Import "../osg.mod/src/osgShadow/ShadowTexture.cpp"
Import "../osg.mod/src/osgShadow/ShadowVolume.cpp"
Import "../osg.mod/src/osgShadow/SoftShadowMap.cpp"
Import "../osg.mod/src/osgShadow/StandardShadowMap.cpp"
Import "../osg.mod/src/osgShadow/Version.cpp"
Import "../osg.mod/src/osgShadow/ViewDependentShadowTechnique.cpp"
