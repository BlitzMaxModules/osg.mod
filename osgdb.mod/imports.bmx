' osg openthread module import list

Strict

ModuleInfo "CC_OPTS: -fexceptions" 
ModuleInfo "CC_OPTS: -DOT_LIBRARY_STATIC"
ModuleInfo "CC_OPTS: -DOSG_LIBRARY_STATIC"
?Win32
ModuleInfo "CC_OPTS: -D_GLIBCXX_USE_WCHAR_T"
?

Import "../osg.mod/include/*.h"

Import "../osg.mod/src/osgDB/Archive.cpp"
Import "../osg.mod/src/osgDB/AuthenticationMap.cpp"
Import "../osg.mod/src/osgDB/ConvertUTF.cpp"
Import "../osg.mod/src/osgDB/DatabasePager.cpp"
Import "../osg.mod/src/osgDB/DotOsgWrapper.cpp"
Import "../osg.mod/src/osgDB/DynamicLibrary.cpp"
Import "../osg.mod/src/osgDB/Field.cpp"
Import "../osg.mod/src/osgDB/FieldReader.cpp"
Import "../osg.mod/src/osgDB/FieldReaderIterator.cpp"
Import "../osg.mod/src/osgDB/FileCache.cpp"
Import "../osg.mod/src/osgDB/FileNameUtils.cpp"
Import "../osg.mod/src/osgDB/FileUtils.cpp"
Import "../osg.mod/src/osgDB/fstream.cpp"
Import "../osg.mod/src/osgDB/ImageOptions.cpp"
Import "../osg.mod/src/osgDB/ImagePager.cpp"
Import "../osg.mod/src/osgDB/Input.cpp"
Import "../osg.mod/src/osgDB/Output.cpp"
Import "../osg.mod/src/osgDB/PluginQuery.cpp"
Import "../osg.mod/src/osgDB/ReaderWriter.cpp"
Import "../osg.mod/src/osgDB/ReadFile.cpp"
Import "../osg.mod/src/osgDB/Registry.cpp"
Import "../osg.mod/src/osgDB/SharedStateManager.cpp"
Import "../osg.mod/src/osgDB/Version.cpp"
Import "../osg.mod/src/osgDB/WriteFile.cpp"
