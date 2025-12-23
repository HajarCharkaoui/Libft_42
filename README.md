<div align="center">
  <img src="https://github.com/mcombeau/42-project-badges/raw/main/badges/libftm.png" alt="Libft Badge" width="150" />

  # Libft
  
  <p>
    <b>My very first own C library.</b>
  </p>

  <a href="https://github.com/mcombeau/42-project-badges">
    <img src="https://img.shields.io/badge/Score-100%2F100-success?style=for-the-badge&logo=42" alt="Score" />
  </a>
  <img src="https://img.shields.io/badge/Language-C-blue?style=for-the-badge&logo=c" alt="Language" />
  <img src="https://img.shields.io/badge/Norminette-Passing-brightgreen?style=for-the-badge" alt="Norminette" />
</div>

---

## 🗣️ About

**Libft** (Library of Functions) is the first project in the 42 curriculum. The goal is to create a custom C library named `libft.a` containing re-implementations of standard C library functions (like `printf`, `strchr`, `strlen`, etc.) as well as additional utility functions that are useful for future projects.

This library is essentially a collection of useful tools that I can use in all my future C assignments at 42.

---

## 🛠️ Usage

### 1. Compilation
Clone the repository and run `make` to compile the library.

```bash
make
```
This will generate the static library file libft.a.2. Using it in your codeTo use this library in your projects, include the header file and link the library during compilation.Include Header:C#include "libft.h"
```c
int main()
{
    ft_putstr_fd("Hello, Libft!", 1);
    return (0);
}
```
Compile:
```Bash
cc main.c libft.a -o my_program
```
### 📋 List of Functions
Part 1 - Libc Functions
Re-implementations of standard C library functions.
| Function | Description |
| :--- | :--- |
| `ft_isalpha` | Checks for an alphabetic character. |
| `ft_isdigit` | Checks for a digit (0 through 9). |
| `ft_isalnum` | Checks for an alphanumeric character. |
| `ft_isascii` | Checks whether c fits into the ASCII character set. |
| `ft_isprint` | Checks for any printable character. |
| `ft_strlen` | Calculates the length of a string. |
| `ft_memset` | Fills memory with a constant byte. |
| `ft_bzero` | Zeroes a byte string. |
| `ft_memcpy` | Copies memory area. |
| `ft_memmove` | Copies memory area (handles overlaps). |
| `ft_strlcpy` | Copies string to a specific size. |
| `ft_strlcat` | Concatenates string to a specific size. |
| `ft_toupper` | Converts char to uppercase. |
| `ft_tolower` | Converts char to lowercase. |
| `ft_strchr` | Locates character in string (first occurrence). |
| `ft_strrchr` | Locates character in string (last occurrence). |
| `ft_strncmp` | Compares two strings. |
| `ft_memchr` | Scans memory for a character. |
| `ft_memcmp` | Compares memory areas. |
| `ft_strnstr` | Locates a substring in a string. |
| `ft_atoi` | Converts a string to an integer. |
| `ft_calloc` | Allocates memory and sets its bytes' values to 0. |
| `ft_strdup` | Creates a duplicate for the string passed as parameter. |


Part 2 - Additional Functions
Useful functions not included in the standard libc.


| Function | Description |
| :--- | :--- |
| `ft_substr` | Allocates and returns a substring from the string 's'. |
| `ft_strjoin` | Allocates and returns a new string, result of the concatenation of 's1' and 's2'. |
| `ft_strtrim` | Allocates and returns a copy of 's1' with the characters specified in 'set' removed from the start and the end. |
| `ft_split` | Allocates and returns an array of strings obtained by splitting 's' using the character 'c' as a delimiter. |
| `ft_itoa` | Allocates and returns a string representing the integer received as an argument. |
| `ft_strmapi` | Applies the function 'f' to each character of the string 's' to create a new string. |
| `ft_striteri` | Applies the function 'f' to each character of the string 's'. |
| `ft_putchar_fd` | Outputs the character 'c' to the given file descriptor. |
| `ft_putstr_fd` | Outputs the string 's' to the given file descriptor. |
| `ft_putendl_fd` | Outputs the string 's' to the given file descriptor, followed by a newline. |
| `ft_putnbr_fd` | Outputs the integer 'n' to the given file descriptor. |


Bonus Part - Linked Lists
Functions to manipulate lists.


| Function | Description |
| :--- | :--- |
| `ft_lstnew` | Allocates and returns a new element. |
| `ft_lstadd_front` | Adds the element 'new' at the beginning of the list. |
| `ft_lstsize` | Counts the number of elements in a list. |
| `ft_lstlast` | Returns the last element of the list. |
| `ft_lstadd_back` | Adds the element 'new' at the end of the list. |
| `ft_lstdelone` | Takes as a parameter an element and frees the memory of the element’s content. |
| `ft_lstclear` | Deletes and frees the given element and every successor of that element. |
| `ft_lstiter` | Iterates the list 'lst' and applies 'f' to the content of each element. |
| `ft_lstmap` | Iterates the list 'lst' and applies 'f' to the content of each element. |

<div align="center">
  <sub>Created by hacharka | 42 Network</sub>
</div>
