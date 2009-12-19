' osg openthread module import list

Strict

ModuleInfo "CC_OPTS: -fexceptions" 
ModuleInfo "CC_OPTS: -DOT_LIBRARY_STATIC"
ModuleInfo "CC_OPTS: -DOSG_LIBRARY_STATIC"
?Win32
ModuleInfo "CC_OPTS: -D_GLIBCXX_USE_WCHAR_T"
?

Import osg.osgutil

Import "../osg.mod/include/*.h"

Import "../osg.mod/src/osgFX/AnisotropicLighting.cpp"
Import "../osg.mod/src/osgFX/BumpMapping.cpp"
Import "../osg.mod/src/osgFX/Cartoon.cpp"
Import "../osg.mod/src/osgFX/Effect.cpp"
Import "../osg.mod/src/osgFX/MultiTextureControl.cpp"
Import "../osg.mod/src/osgFX/Registry.cpp"
Import "../osg.mod/src/osgFX/Scribe.cpp"
Import "../osg.mod/src/osgFX/SpecularHighlights.cpp"
Import "../osg.mod/src/osgFX/Technique.cpp"
Import "../osg.mod/src/osgFX/Validator.cpp"
Import "../osg.mod/src/osgFX/Version.cpp"
