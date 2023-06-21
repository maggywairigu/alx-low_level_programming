# 0x18. C - Dynamic libraries

In this project, I gained knowledge about dynamic libraries, their functionality, creation, and usage. It also provided me with a clear understanding of the distinctions between static and shared libraries.

## Function Prototypes 📁
The following files contain scripts written in C for the projects:

## Table of Contents
Files | Description
----- | -----------
[libdynamic.so](./libdynamic.so) | C dynamic library that includes function definitions
[main.h](./main.h) | Header file with function prototypes
[1-create_dynamic_lib.sh](./1-create_dynamic_lib.sh) | Bash script that generates a dynamic library called liball.so from all the .c files in the current directory
[100-operations.so](./100-operations.so) | C dynamic library containing C functions callable from Python
[random.so](./random.so) | C dynamic library intended for injection into a giga million program
[101-make_me_win.sh](./101-make_me_win.sh) | Bash script to inject the libmask.so library into the giga million program using LD_PRELOAD