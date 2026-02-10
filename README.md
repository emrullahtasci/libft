*This project has been created as part of the 42 curriculum by etasci.*

# Libft

## Description
Libft is the first project of the 42 school curriculum. The core objective of this project is to recreate several functions from the standard C library (**libc**) along with additional utility functions. By re-implementing these functions, I have gained a deep understanding of memory management, pointer arithmetic, and low-level data manipulation in C. This library will serve as a foundational toolkit for almost all of my future projects within the 42 network.

## Library Overview
The library consists of various categories of functions:
- **Character Checks:** Functions like `ft_isalpha` and `ft_isdigit` to validate character types.
- **Memory Management:** Functions like `ft_memset`, `ft_memcpy`, and `ft_calloc` to handle memory blocks.

- **String Manipulation:** Functions like `ft_strlen`, `ft_strjoin`, and `ft_split` for processing text data.
- **Linked Lists (Bonus):** Functions to create and manage dynamic data structures.


## Instructions

### Compilation
You can compile the library using the provided Makefile. The available commands are:
- `make`: Compiles the mandatory functions and creates the `libft.a` static library.
- `make bonus`: Compiles the library including the linked list functions.
- `make clean`: Removes the object files (.o).
- `make fclean`: Removes the object files and the generated library file.
- `make re`: Recompiles the entire project from scratch.

### Usage
To use this library in your code, simply include the header:
```c
#include "libft.h"
