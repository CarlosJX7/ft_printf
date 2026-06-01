*This project was created as part of the 42 curriculum by CarlosJX7.*

# ft_printf

## Description

**ft_printf** is a reimplementation of the well-known formatted output function `printf` from the C standard library (`<stdio.h>`). Its main goal is to deepen the understanding of how **variadic functions** work internally and how to efficiently parse and process a structured data stream.

The implemented function parses an input format string and prints, in sequence, the values corresponding to the required format specifiers, returning the exact number of bytes written to the standard output (`stdout`).

---

## Instructions

### Prerequisites

A UNIX environment (Linux, macOS), a basic compiler (`gcc`), and the `make` build tool are required.

### Building the Library

To build the project and generate the static library file `libftprintf.a`, clone this repository and run the following command from the project root:

```bash
make
```

The Makefile includes the standard rules required by the 42 norm:

- **make all**: Compiles the source files and packages the library.
- **make clean**: Removes generated object files (`.o`).
- **make fclean**: Removes object files and deletes the final compiled library (`libftprintf.a`).
- **make re**: Rebuilds everything from scratch by running `fclean` followed by `all`.

### Using It in Your Own Projects

To use this function in any C program, include the header file and call the function:

```c
#include "ft_printf.h"

int	main(void)
{
    ft_printf("Printing a number: %d and a hexadecimal: %x\n", 42, 42);
    return (0);
}
```

Compile your executable by linking the compiled static library:

```bash
cc main.c libftprintf.a -o my_program
```

---

## Resources

### References

- UNIX man pages: `man 3 printf`, `man 3 stdarg`
- C99 / ISO C standard: documentation about pointer behavior and adaptive-width integers (`uintptr_t`)
- Variadic functions tutorials: GNU C Library documentation on the correct use of `va_start` and `va_end`
- Data structures / parsing: stream parsing techniques and numeric conversion via successive divisions

### Use of Artificial Intelligence

In compliance with academic transparency policies, the use of an AI Assistant is declared for the following tasks:

- **Code review and optimization**: to improve readability and efficiency of the parsing algorithm
- **README documentation and formatting**: to structure and adapt the project presentation
- **Debugging edge cases**: to identify and resolve corner cases in format conversions

The main development and algorithmic logic of the project were carried out independently.