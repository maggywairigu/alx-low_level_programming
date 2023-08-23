# 0x1C. C - Makefiles

Welcome to the **0x1C. C - Makefiles** project! In this project, you'll learn about Makefiles, a powerful tool used for managing the compilation and building process of your C programs. By the end of this project, you'll have a solid understanding of what Makefiles are, why and how to use them, and how they can simplify the development and compilation process for your projects.

## Learning Objectives

After completing this project, you should be able to:

- Explain the concepts of make and Makefiles.
- Understand the reasons for using Makefiles in C projects.
- Define and utilize rules within a Makefile.
- Differentiate between explicit and implicit rules.
- Identify and implement common/useful rules.
- Work with variables to customize compilation settings.
- Understand and implement the functionalities of the provided tasks.

## Project Details

- **Author:** Julien Barbier
- **Weight:** 1
- **Start Date:** August 23, 2023, 6:00 AM
- **End Date:** August 24, 2023, 6:00 AM
- **Checker Release:** August 23, 2023, 12:00 PM
- **Auto Review:** Launched at the project deadline

## Resources

To successfully complete this project, you should read or watch the following resources:

- [Makefile](https://en.wikipedia.org/wiki/Makefile)
- [Installing the make utility](https://www.gnu.org/software/make/)
- [GNU Make official documentation](https://www.gnu.org/software/make/manual/make.html)

## Requirements

### General

- **Allowed Editors:** vi, vim, emacs
- **Operating System:** Ubuntu 20.04 LTS
- **Version of gcc:** 9.3.0
- **Version of make:** GNU Make 4.2.1
- All your files should end with a new line
- You must have a README.md file at the root of the project folder.

## Tasks

### 0. make -f 0-Makefile

Create your first Makefile.

- **Requirements:**
  - Name of the executable: school
  - Rules: all
  - The all rule builds your executable
  - Variables: none

Example usage:

```bash
$ make -f 0-Makefile
gcc main.c school.c -o school
$ ./school
j#0000000000000000000000000000000000000
# ...
```

### 1. make -f 1-Makefile

- **Requirements:**
  - Name of the executable: school
  - Rules: all
  - The all rule builds your executable
  - Variables: CC, SRC

### 2. make -f 2-Makefile

Create your first useful Makefile.

- **Requirements:**
  - Name of the executable: school
  - Rules: all
  - The all rule builds your executable
  - Variables: CC, SRC, OBJ, NAME

### 3. make -f 3-Makefile

- **Requirements:**
  - Name of the executable: school
  - Rules: all, clean, oclean, fclean, re
  - all: builds your executable
  - clean: deletes temporary files and the executable
  - oclean: deletes object files
  - fclean: deletes temporary files, the executable, and object files
  - re: forces recompilation of all source files
  - Variables: CC, SRC, OBJ, NAME, RM

### 4. A complete Makefile

- **Requirements:**
  - Name of the executable: school
  - Rules: all, clean, fclean, oclean, re
  - all: builds your executable
  - clean: deletes temporary files and the executable
  - oclean: deletes object files
  - fclean: deletes temporary files, the executable, and object files
  - re: forces recompilation of all source files
  - Variables: CC, SRC, OBJ, NAME, RM, CFLAGS

### 5. Island Perimeter

Technical interview preparation:

Create a Python function that calculates the perimeter of an island described in a given grid.

- **Requirements:**
  - Function: `def island_perimeter(grid):`
  - Input: `grid`, a list of lists of integers
  - Output: Perimeter of the island described in the grid
  - Constraints: 
    - Each cell is either 0 (water) or 1 (land)
    - Cells are connected horizontally/vertically (not diagonally)
    - Grid width and height don't exceed 100
    - Grid is completely surrounded by water, and there is one island (or nothing)
    - The island doesn’t have “lakes” (water inside that isn’t connected to the water around the island)
