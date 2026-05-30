
*This project has been created as part of the 42 curriculum by carlinaq.*

# Libft

**[ Language: C ] | [ Standard: 42 Norm ] | [ Status: Development ]**

---


## Description

Libft is a foundational project for the 42 curriculum. Its goal is to create a custom, statically-linked C library that reimplements a wide range of standard C library functions, as well as additional utilities. This library is designed to be reused in future projects, providing a robust toolkit for memory management, string manipulation, and data structures.

The project enforces a deep understanding of low-level programming, pointer arithmetic, and safe memory handling. All code must comply with the 42 Norm and be free of memory leaks and undefined behavior.

---


## Instructions

### Compilation

To compile the library and generate the static archive, run:

```bash
make
```

### Build Rules

- `make` / `make all`: Build the library and generate `libft.a`.
- `make clean`: Remove all object files.
- `make fclean`: Remove all object files and the library archive.
- `make re`: Clean and rebuild everything from scratch.

### Usage

1. Copy `libft.a` and `libft.h` to your project directory.
2. Include the header in your source files:
   ```c
   #include "libft.h"
   ```
3. Link the library when compiling:
   ```bash
   cc -Wall -Wextra -Werror -o program main.c -L. -lft
   ```

---


## Library Overview

### Part 1: Libc Functions (Core Implementations)

**Character Classification & Conversion:** (Returns 1 for true, 0 for false)
- `ft_isalpha` - Evaluates if a character belongs to the alphabet.
- `ft_isdigit` - Evaluates if a character is a numeric digit (0-9).
- `ft_isalnum` - Checks for alphanumeric characters.
- `ft_isascii` - Validates if a character falls within the 7-bit ASCII set.
- `ft_isprint` - Determines if a character is printable (including space).
- `ft_toupper` - Elevates a lowercase character to uppercase.
- `ft_tolower` - Reduces an uppercase character to lowercase.

**Raw Memory Manipulation:**
- `ft_memset` - Populates a block of memory with a specific byte value.
- `ft_bzero` - Zeroes out a designated memory footprint.
- `ft_memcpy` - Copies a predefined number of bytes from source to destination.
- `ft_memmove` - Safely transfers memory blocks, accounting for overlapping regions.
- `ft_memchr` - Scans a memory block for the first occurrence of a specific byte.
- `ft_memcmp` - Lexicographically compares two independent memory areas.
- `ft_calloc` - Allocates heap memory for an array and initializes all bytes to zero.

**C-String Parsing & Manipulation:**
- `ft_strlen` - Calculates the exact length of a null-terminated string.
- `ft_strlcpy` - Size-bounded, secure string copying.
- `ft_strlcat` - Size-bounded, secure string concatenation.
- `ft_strchr` - Locates the first instance of a character within a string.
- `ft_strrchr` - Locates the final instance of a character within a string.
- `ft_strncmp` - Compares up to 'n' bytes of two strings.
- `ft_strnstr` - Hunts for a specific substring within a larger string, up to 'n' bytes.
- `ft_atoi` - Parses a string and converts valid numeric sequences into an integer.
- `ft_strdup` - Allocates memory and generates an exact duplicate of a string.

### Part 2: Additional Utility Functions

**Advanced String Formatting & Heap Operations:**
- `ft_substr` - Extracts and allocates a specific substring defined by start index and length.
- `ft_strjoin` - Fuses two strings together into a newly allocated memory block.
- `ft_strtrim` - Strips a specified set of characters from both the beginning and end of a string.
- `ft_split` - Divides a string into a null-terminated 2D array of substrings based on a delimiter.
- `ft_itoa` - Converts an integer value into its string (char array) representation.
- `ft_strmapi` - Iterates over a string, passing each character and its index to a mapping function to create a new string.
- `ft_striteri` - Iterates over a string, applying a mutator function directly to its memory addresses.

**File Descriptor (I/O) Operations:**
- `ft_putchar_fd` - Outputs a single character to a specified file descriptor.
- `ft_putstr_fd` - Outputs a complete string to a specified file descriptor.
- `ft_putendl_fd` - Outputs a string followed by a newline character (`\n`) to a file descriptor.
- `ft_putnbr_fd` - Outputs an integer as text to a specified file descriptor.

### Part 3: Linked List Data Structures

Implementation of a singly linked list API utilizing the following type definition:

```c
typedef struct s_list
{
    void            *content;
    struct s_list   *next;
} t_list;
```

**List Operations:**
- `ft_lstnew` - Allocates and initializes a standalone list node.
- `ft_lstadd_front` - Prepends a new node to the head of the list.
- `ft_lstadd_back` - Appends a new node to the tail of the list.
- `ft_lstsize` - Iterates through the list to calculate the total number of nodes.
- `ft_lstlast` - Traverses to and returns the final node in the sequence.
- `ft_lstdelone` - Safely frees the memory of a single node's content and the node itself.
- `ft_lstclear` - Iterates through and completely deallocates an entire linked list structure.
- `ft_lstiter` - Applies a given function to the content of every node in the list.
- `ft_lstmap` - Iterates through a list, applying a function to create a completely new, mapped list (handling allocation failures gracefully).

---


## Technical Specifications & Constraints

### Compilation Standards

- **Compiler Constraint**: Must use `cc`.
- **Mandatory Flags**: `-Wall -Wextra -Werror` (No exceptions).
- **C Standard**: Strict ANSI/ISO C (The `-std=c99` flag is strictly forbidden).
- **Archiving tool**: Must be compiled using `ar rc` (the use of `libtool` is prohibited).

### Structural & Safety Rules

- **Zero Global Variables**: The use of global variables will result in immediate failure.
- **Memory Integrity**: Every single byte allocated via `malloc` must be tracked and freed. Memory leaks are heavily penalized.
- **Crash Prevention**: Functions must handle edge cases gracefully. Segmentation faults, bus errors, or double frees are unacceptable.
- **Norminette**: Every `.c` and `.h` file must pass the 42 Norm validation tool perfectly.

### Expected Deliverables

- **Binary**: `libft.a` (The compiled static archive).
- **Header**: `libft.h` (Containing all necessary includes, struct definitions, and function prototypes).

---



## Project Structure

```text
.
├── Makefile
├── README.md
├── libft.h
├── ft_atoi.c
├── ft_bzero.c
├── ft_calloc.c
├── ft_isalnum.c
├── ft_isalpha.c
├── ft_isascii.c
├── ft_isdigit.c
├── ft_isprint.c
├── ft_itoa.c
├── ft_lstadd_back.c
├── ft_lstadd_front.c
├── ft_lstclear.c
├── ft_lstdelone.c
├── ft_lstiter.c
├── ft_lstlast.c
├── ft_lstmap.c
├── ft_lstnew.c
├── ft_lstsize.c
├── ft_memchr.c
├── ft_memcmp.c
├── ft_memcpy.c
├── ft_memmove.c
├── ft_memset.c
├── ft_putchar_fd.c
├── ft_putendl_fd.c
├── ft_putnbr_fd.c
├── ft_putstr_fd.c
├── ft_split.c
├── ft_strchr.c
├── ft_strdup.c
├── ft_striteri.c
├── ft_strjoin.c
├── ft_strlcat.c
├── ft_strlcpy.c
├── ft_strlen.c
├── ft_strmapi.c
├── ft_strncmp.c
├── ft_strnstr.c
├── ft_strrchr.c
├── ft_strtrim.c
├── ft_substr.c
├── ft_tolower.c
├── ft_toupper.c
```

---


## Local Verification

To ensure your environment is set up correctly and the library functions as intended:

1. Build the archive by running `make`.
2. Draft a `main.c` file invoking a few functions (e.g., `ft_strlen`, `ft_split`).
3. Compile them together:
   ```bash
   cc -Wall -Wextra -Werror -o test_program main.c -L. -lft
   ```
4. Execute `./test_program` and cross-reference the output against standard `libc` behavior.

---


## Resources

- [42 Norminette](https://github.com/42School/norminette)
- [Memory Management](https://docs.utnso.com.ar/guias/programacion/punteros)
- [Linked lists](https://www.learn-c.org/en/Linked_lists)

### Use of AI

Artificial Intelligence tools were used for:
- Project planning and documentation structuring
- Boilerplate code generation and refactoring suggestions
- Improving code comments and documentation

All code has been reviewed and validated by the author to ensure compliance with project requirements.

---

*This project has been created as part of the 42 curriculum by carlinaq.*