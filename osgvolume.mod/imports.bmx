' osg module import list

Strict

ModuleInfo "CC_OPTS: -fexceptions" 
ModuleInfo "CC_OPTS: -DOT_LIBRARY_STATIC"
ModuleInfo "CC_OPTS: -DOSG_LIBRARY_STATIC"
?Win32
ModuleInfo "CC_OPTS: -D_GLIBCXX_USE_WCHAR_T"
?

Import "../osg.mod/include/*.h"

Import "../osg.mod/src/osgVolume/FixedFunctionTechnique.cpp"
Import "../osg.mod/src/osgVolume/Layer.cpp"
Import "../osg.mod/src/osgVolume/Locator.cpp"
Import "../osg.mod/src/osgVolume/Property.cpp"
Import "../osg.mod/src/osgVolume/RayTracedTechnique.cpp"
Import "../osg.mod/src/osgVolume/Version.cpp"
Import "../osg.mod/src/osgVolume/Volume.cpp"
Import "../osg.mod/src/osgVolume/VolumeTechnique.cpp"
Import "../osg.mod/src/osgVolume/VolumeTile.cpp"
Import "../osg.mod/src/osgVolume/Shaders/volume_frag.cpp"
Import "../osg.mod/src/osgVolume/Shaders/volume_iso_frag.cpp"
Import "../osg.mod/src/osgVolume/Shaders/volume_lit_frag.cpp"
Import "../osg.mod/src/osgVolume/Shaders/volume_lit_tf_frag.cpp"
Import "../osg.mod/src/osgVolume/Shaders/volume_mip_frag.cpp"
Import "../osg.mod/src/osgVolume/Shaders/volume_tf_frag.cpp"
Import "../osg.mod/src/osgVolume/Shaders/volume_tf_iso_frag.cpp"
Import "../osg.mod/src/osgVolume/Shaders/volume_tf_mip_frag.cpp"
Import "../osg.mod/src/osgVolume/Shaders/volume_vert.cpp"
