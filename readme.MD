# C/C++ Developement Environment in VS Code!

Let's get started in VS Code.

## Setup Linux Environment for C++
* [Install VS Code](https://code.visualstudio.com/download)

### Install VS Code Extensions
* [C/C++ vscode extension](https://marketplace.visualstudio.com/items?itemName=ms-vscode.cpptools)
  - Ctrl + P and enter:  `ext install ms-vscode.cpptool`
* [GCC (GNU Compiler Collection) on Linux](https://code.visualstudio.com/docs/cpp/config-linux)
* Code Runner
* C/C++ Makefile Project
* [Setup VS Code for g++](https://code.visualstudio.com/docs/cpp/config-linux)
  * create files in .vscode

## Process
- Compile source code on Linux using g++ compiler.
- Debug using GDB

## Click Run or in terminal:
    code .
    g++ main.cpp -o main && ./main

## How to create Make File [link](https://www.youtube.com/watch?v=whQQF4kVjPY&t=292s)
    Open Project Location
    Open main.cpp
    Ctrl + Shift + P
    make > C/C++ Make INIT Project > C++ Project
    Change `APPNAME` = new-name
    Change `SRCDIR` = pwd Ex. /home/kphi/Repos/c-modules/projects/list
    $ make = to build, compile and create executable
    $ ./new-name

## Helpful
    code .

    Select all like = Ctrl + Shift + L