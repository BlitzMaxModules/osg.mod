
Strict

Rem
bbdoc: Open Scene Graph 2.8.2 Open Threads
End Rem

Module osg.osgviewer

ModuleInfo "Version: 1.00"
ModuleInfo "Author: Simon Armstrong"
ModuleInfo "Copyright: (C) 1998-2006 Robert Osfield"
ModuleInfo "License: OpenSceneGraph Public License (OSGPL)"

ModuleInfo "History: 0.01 Release"
ModuleInfo "History: beastly build"

Import "imports.bmx"

?Win32
Extern "C"
Function graphicswindow_Win32()
End Extern
graphicswindow_Win32()
?

?Linux
Extern "C"
Function graphicswindow_X11()
End Extern
graphicswindow_X11()
?

?MacOS
Extern "C"
Function graphicswindow_Carbon()
End Extern
graphicswindow_Carbon()
?
