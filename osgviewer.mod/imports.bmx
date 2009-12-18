' osg openthread module import list

Strict

ModuleInfo "CC_OPTS: -fexceptions" 
ModuleInfo "CC_OPTS: -DOT_LIBRARY_STATIC"
ModuleInfo "CC_OPTS: -DOSG_LIBRARY_STATIC"
?Win32
ModuleInfo "CC_OPTS: -D_GLIBCXX_USE_WCHAR_T"
?

Import "../osg.mod/include/*.h"

Import "../osg.mod/src/osgViewer/CompositeViewer.cpp"
?Linux
Import "../osg.mod/src/osgViewer/GraphicsWindowX11.cpp"
Import "../osg.mod/src/osgViewer/PixelBufferX11.cpp"
?
?Win32
Import "../osg.mod/src/osgViewer/GraphicsWindowWin32.cpp"
Import "../osg.mod/src/osgViewer/PixelBufferWin32.cpp"
?
?MacOS
Import "../osg.mod/src/osgViewer/GraphicsWindowCarbon.cpp"
Import "../osg.mod/src/osgViewer/PixelBufferCarbon.cpp"
?
Import "../osg.mod/src/osgViewer/HelpHandler.cpp"
Import "../osg.mod/src/osgViewer/Renderer.cpp"
Import "../osg.mod/src/osgViewer/Scene.cpp"
Import "../osg.mod/src/osgViewer/ScreenCaptureHandler.cpp"
Import "../osg.mod/src/osgViewer/StatsHandler.cpp"
Import "../osg.mod/src/osgViewer/Version.cpp"
Import "../osg.mod/src/osgViewer/View.cpp"
Import "../osg.mod/src/osgViewer/Viewer.cpp"
Import "../osg.mod/src/osgViewer/ViewerBase.cpp"
Import "../osg.mod/src/osgViewer/ViewerEventHandlers.cpp"
