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