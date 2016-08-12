# tris
Tris is a cross platform frontend, core, backend idiom library on which C++ applications may implement their proprietary implementations.

## Synopsis

* Add this reposiroty as a Git submodule to your project (preferrably in sub-foler "external" to remember it is add-on source)
* Add the source code in sub-folder "src" (except tris_main_template.cpp) to be built in your own project
* See tris_main_template.cpp on how to extend the base frontend, core and backend classes for your own application. 

## Project
```
C:\Users\kjell-olovhogdahl\Documents\GitHub\tris>tree /F
Folder PATH listing
Volume serial number is D49B-BB89
C:.
│   .gitignore
│   LICENSE
│   README.md
│
└───build
    │   CMakeLists.txt
    │   msys2_clang_me.sh           // Generates MSYS2 (MinGW) clang build environment
    │   msys2_deafult_me.sh         // Generates MSYS2 (MinGW) default (GCC) build environment
    │   vs_me.cmd                   // Generates Visual Studio IDE build environment
    │
    └───src                         // Add these source files (except tris_main_template.cpp) to your project
            Active.cpp
            Active.h
            BackEnd.cpp
            BackEnd.h
            Core.cpp
            Core.h
            FrontEnd.cpp
            FrontEnd.h
            tris_main_template.cpp  // Use this as template for your own project main entry point


C:\Users\kjell-olovhogdahl\Documents\GitHub\tris>
```

## Version 0.1

* Initial source added.
* Added tris_main_template.cpp to enable build of a "naked" console application with a bare frontend, core and backend.
* Builds ok with Visual Studio and MinGW GCC
* Does not yet build with MinGW Clang (Problem with linking to threading library) 

## Example: Build with MinGW GCC (default MinGW tool chain)
```
kjell-olovhogdahl@KJELL-OLOVHA74E MINGW64 /c/Users/kjell-olovhogdahl/Documents/GitHub/tris/build
$ ./msys2_deafult_me.sh
#!/bin/bash -v
BUILD_DIR=./build_msys2
if [ -d "$BUILD_DIR" ]
then
        rm -rf "$BUILD_DIR"
fi
mkdir "$BUILD_DIR"
cd "$BUILD_DIR"
cmake .. -G"MSYS Makefiles"
-- The C compiler identification is GNU 5.4.0
-- The CXX compiler identification is GNU 5.4.0
-- Check for working C compiler: C:/msys64/mingw64/bin/gcc.exe
-- Check for working C compiler: C:/msys64/mingw64/bin/gcc.exe -- works
-- Detecting C compiler ABI info
-- Detecting C compiler ABI info - done
-- Detecting C compile features
-- Detecting C compile features - done
-- Check for working CXX compiler: C:/msys64/mingw64/bin/g++.exe
-- Check for working CXX compiler: C:/msys64/mingw64/bin/g++.exe -- works
-- Detecting CXX compiler ABI info
-- Detecting CXX compiler ABI info - done
-- Detecting CXX compile features
-- Detecting CXX compile features - done
-- Boost version: 1.60.0
-- Boost version: 1.60.0
-- Found the following Boost libraries:
--   filesystem
--   system
-- Looking for pthread.h
-- Looking for pthread.h - found
-- Looking for pthread_create
-- Looking for pthread_create - found
-- Found Threads: TRUE
-- Configuring done
-- Generating done
-- Build files have been written to: C:/Users/kjell-olovhogdahl/Documents/GitHub/tris/build/build_msys2

kjell-olovhogdahl@KJELL-OLOVHA74E MINGW64 /c/Users/kjell-olovhogdahl/Documents/GitHub/tris/build
$ 
```
```
kjell-olovhogdahl@KJELL-OLOVHA74E MINGW64 /c/Users/kjell-olovhogdahl/Documents/GitHub/tris/build
$ cd build_msys2

kjell-olovhogdahl@KJELL-OLOVHA74E MINGW64 /c/Users/kjell-olovhogdahl/Documents/GitHub/tris/build/build_msys2
$ make
Scanning dependencies of target tris
[ 16%] Building CXX object CMakeFiles/tris.dir/src/tris_main_template.cpp.obj
[ 33%] Building CXX object CMakeFiles/tris.dir/src/Active.cpp.obj
[ 50%] Building CXX object CMakeFiles/tris.dir/src/BackEnd.cpp.obj
[ 66%] Building CXX object CMakeFiles/tris.dir/src/Core.cpp.obj
[ 83%] Building CXX object CMakeFiles/tris.dir/src/FrontEnd.cpp.obj
[100%] Linking CXX executable tris.exe
[100%] Built target tris

kjell-olovhogdahl@KJELL-OLOVHA74E MINGW64 /c/Users/kjell-olovhogdahl/Documents/GitHub/tris/build/build_msys2
$ 
```
```
kjell-olovhogdahl@KJELL-OLOVHA74E MINGW64 /c/Users/kjell-olovhogdahl/Documents/GitHub/tris/build/build_msys2
$ ./tris.exe

tris>Enter "quit" to exit
tris>
Enter "quit" to exit
tris>quit

Done!

kjell-olovhogdahl@KJELL-OLOVHA74E MINGW64 /c/Users/kjell-olovhogdahl/Documents/GitHub/tris/build/build_msys2
$
```
