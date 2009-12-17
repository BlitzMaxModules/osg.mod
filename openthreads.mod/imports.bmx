' osg openthread module import list

Strict

ModuleInfo "CC_OPTS: -fexceptions" 
ModuleInfo "CC_OPTS: -DOT_LIBRARY_STATIC"
ModuleInfo "CC_OPTS: -DOSG_LIBRARY_STATIC"
?Win32
ModuleInfo "CC_OPTS: -D_GLIBCXX_USE_WCHAR_T"
?

Import "../osg.mod/include/*.h"

' OpenThreads

Import "../osg.mod/src/OpenThreads/common/Atomic.cpp"
Import "../osg.mod/src/OpenThreads/common/Version.cpp"

?win32
Import "../osg.mod/src/OpenThreads/win32/WIN32Condition.cpp"
Import "../osg.mod/src/OpenThreads/win32/Win32Mutex.cpp"
Import "../osg.mod/src/OpenThreads/win32/Win32Thread.cpp"
Import "../osg.mod/src/OpenThreads/win32/Win32ThreadBarrier.cpp"
?

?Linux
Import "../osg.mod/src/OpenThreads/pthreads/PThread.cpp"
Import "../osg.mod/src/OpenThreads/pthreads/PThreadBarrier.cpp"
Import "../osg.mod/src/OpenThreads/pthreads/PThreadCondition.cpp"
Import "../osg.mod/src/OpenThreads/pthreads/PThreadMutex.cpp"
?
