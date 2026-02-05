*This project has been created as part of the 42 curriculum by yvoandri.*

# Libft

# Description

Libft is the **first project of the 42 curriculum**. It consists of reimplementing essential C standard library functions and additional utilities (especially linked lists) in order to deeply understand:

* How the C standard library works internally
* Memory management
* Pointers and function pointers
* Modular project structure using a Makefile

This library will be reused in many future 42 projects.

---

# Instructions

## Project Structure

```
libft/
├── ft_*.c        # One file per function
├── libft.h       # Function prototypes and structures
├── Makefile      # Makefile for the compilation
```

---

# Compilation & Usage

## Compile the library

```bash
make
```

This generates `libft.a`.

## Use in your project

```c
#include "libft.h"
```

Link with `libft.a` when compiling our program.

## Makefile rules

* `make`       → compile the library
* `make clean` → remove object files
* `make fclean`→ remove object files + `libft.a`
* `make re`    → full rebuild

---

## Functions Overview

The project contains **43 functions**, grouped by category below for clarity.

---

## Character checks

| Function     | Description                         |
| ------------ | ----------------------------------- |
| `ft_isalpha` | Checks if a character is alphabetic |
| `ft_isdigit` | Checks if a character is a digit    |
| `ft_isalnum` | Checks if alphanumeric              |
| `ft_isascii` | Checks if valid ASCII character     |
| `ft_isprint` | Checks if printable ASCII character |

---

## String manipulation

| Function      | Description                                |
| ------------- | ------------------------------------------ |
| `ft_strlen`   | Returns string length                      |
| `ft_strchr`   | Finds first occurrence of a character      |
| `ft_strrchr`  | Finds last occurrence of a character       |
| `ft_strncmp`  | Compares two strings up to n bytes         |
| `ft_strnstr`  | Locates a substring                        |
| `ft_strdup`   | Duplicates a string                        |
| `ft_strlcpy`  | Copies string with size limit              |
| `ft_strlcat`  | Concatenates string with size limit        |
| `ft_substr`   | Extracts a substring                       |
| `ft_strjoin`  | Joins two strings                          |
| `ft_strtrim`  | Trims characters from start/end            |
| `ft_split`    | Splits a string into an array              |
| `ft_strmapi`  | Applies function to each char (new string) |
| `ft_striteri` | Applies function to each char (in place)   |

---

## Memory manipulation

| Function     | Description                     |
| ------------ | ------------------------------- |
| `ft_memset`  | Fills memory with a value       |
| `ft_bzero`   | Sets memory to zero             |
| `ft_memcpy`  | Copies memory (no overlap)      |
| `ft_memmove` | Copies memory (handles overlap) |
| `ft_memchr`  | Finds byte in memory            |
| `ft_memcmp`  | Compares memory blocks          |
| `ft_calloc`  | Allocates and zeroes memory     |

---

## Conversions

| Function  | Description                |
| --------- | -------------------------- |
| `ft_atoi` | Converts string to integer |
| `ft_itoa` | Converts integer to string |

---

## File descriptor output

| Function        | Description              |
| --------------- | ------------------------ |
| `ft_putchar_fd` | Outputs char to fd       |
| `ft_putstr_fd`  | Outputs string to fd     |
| `ft_putendl_fd` | Outputs string + newline |
| `ft_putnbr_fd`  | Outputs number           |

---

## Linked list functions

The list structure is defined as:

```c
typedef struct s_list
{
    void            *content;
    struct s_list   *next;
}                   t_list;
```

| Function          | Description                    |
| ----------------- | ------------------------------ |
| `ft_lstnew`       | Creates a new node             |
| `ft_lstadd_front` | Adds node at the beginning     |
| `ft_lstsize`      | Counts nodes                   |
| `ft_lstlast`      | Returns last node              |
| `ft_lstadd_back`  | Adds node at the end           |
| `ft_lstdelone`    | Deletes one node               |
| `ft_lstclear`     | Deletes all nodes              |
| `ft_lstiter`      | Applies function to each node  |
| `ft_lstmap`       | Creates new list from function |

---

# Useful Resources

* Makefile basics:
  [https://opensource.com/article/18/8/what-how-makefile](https://opensource.com/article/18/8/what-how-makefile)

* Advanced Makefile guide:
  [https://web.stanford.edu/class/archive/cs/cs107/cs107.1174/guide_make.html](https://web.stanford.edu/class/archive/cs/cs107/cs107.1174/guide_make.html)

* ASCII table:
  [https://www.ascii-code.com/](https://www.ascii-code.com/)


# AI's usages

* AI was used to eplain each functions and their behaviors. 
* It is also helpfull to describe the functions.
* Explain the behavior of some indefined functions.
---

# Goal of Libft

By completing Libft, we should be comfortable with:

* Manual memory management
* Rebuilding standard tools from scratch
