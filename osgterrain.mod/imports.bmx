' osg module import list

Strict

ModuleInfo "CC_OPTS: -fexceptions" 
ModuleInfo "CC_OPTS: -DOT_LIBRARY_STATIC"
ModuleInfo "CC_OPTS: -DOSG_LIBRARY_STATIC"
?Win32
ModuleInfo "CC_OPTS: -D_GLIBCXX_USE_WCHAR_T"
?

Import "../osg.mod/include/*.h"

Import "../osg.mod/src/osgTerrain/GeometryTechnique.cpp"
Import "../osg.mod/src/osgTerrain/Layer.cpp"
Import "../osg.mod/src/osgTerrain/Locator.cpp"
Import "../osg.mod/src/osgTerrain/Terrain.cpp"
Import "../osg.mod/src/osgTerrain/TerrainTechnique.cpp"
Import "../osg.mod/src/osgTerrain/TerrainTile.cpp"
Import "../osg.mod/src/osgTerrain/Version.cpp"
