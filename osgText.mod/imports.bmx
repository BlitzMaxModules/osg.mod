' osg openthread module import list

Strict

ModuleInfo "CC_OPTS: -fexceptions" 
ModuleInfo "CC_OPTS: -DOT_LIBRARY_STATIC"
ModuleInfo "CC_OPTS: -DOSG_LIBRARY_STATIC"
?Win32
ModuleInfo "CC_OPTS: -D_GLIBCXX_USE_WCHAR_T"
?

Import "../osg.mod/include/*.h"

Import "../osg.mod/src/osgText/DefaultFont.cpp"
Import "../osg.mod/src/osgText/FadeText.cpp"
Import "../osg.mod/src/osgText/Font.cpp"
Import "../osg.mod/src/osgText/Font3D.cpp"
Import "../osg.mod/src/osgText/String.cpp"
Import "../osg.mod/src/osgText/Text.cpp"
Import "../osg.mod/src/osgText/Text3D.cpp"
Import "../osg.mod/src/osgText/TextBase.cpp"
Import "../osg.mod/src/osgText/Version.cpp"
