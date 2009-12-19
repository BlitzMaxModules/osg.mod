' osg module import list

Strict

ModuleInfo "CC_OPTS: -fexceptions" 
ModuleInfo "CC_OPTS: -DOT_LIBRARY_STATIC"
ModuleInfo "CC_OPTS: -DOSG_LIBRARY_STATIC"
?Win32
ModuleInfo "CC_OPTS: -D_GLIBCXX_USE_WCHAR_T"
?

Import "../osg.mod/include/*.h"

Import "../osg.mod/src/osgWidget/Box.cpp"
Import "../osg.mod/src/osgWidget/Browser.cpp"
Import "../osg.mod/src/osgWidget/Canvas.cpp"
Import "../osg.mod/src/osgWidget/Frame.cpp"
Import "../osg.mod/src/osgWidget/Input.cpp"
Import "../osg.mod/src/osgWidget/Label.cpp"
Import "../osg.mod/src/osgWidget/Lua.cpp"
Import "../osg.mod/src/osgWidget/PdfReader.cpp"
Import "../osg.mod/src/osgWidget/Python.cpp"
Import "../osg.mod/src/osgWidget/StyleManager.cpp"
Import "../osg.mod/src/osgWidget/Table.cpp"
Import "../osg.mod/src/osgWidget/Util.cpp"
Import "../osg.mod/src/osgWidget/Version.cpp"
Import "../osg.mod/src/osgWidget/ViewerEventHandlers.cpp"
Import "../osg.mod/src/osgWidget/VncClient.cpp"
Import "../osg.mod/src/osgWidget/Widget.cpp"
Import "../osg.mod/src/osgWidget/Window.cpp"
Import "../osg.mod/src/osgWidget/WindowManager.cpp"
