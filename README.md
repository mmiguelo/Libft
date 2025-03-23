![# my_libft](https://github.com/mmiguelo/42_project_badges/blob/main/covers/cover-libft-bonus.png)

<p>
    <img src="https://img.shields.io/badge/score-125%20%2F%20100-success?style=for-the-badge" />
    <img src="https://img.shields.io/github/repo-size/mmiguelo/Libft?style=for-the-badge&logo=github">
    <img src="https://img.shields.io/github/languages/count/mmiguelo/Libft?style=for-the-badge&logo=" />
    <img src="https://img.shields.io/github/languages/top/mmiguelo/Libft?style=for-the-badge" />
    <img src="https://img.shields.io/github/last-commit/mmiguelo/Libft?style=for-the-badge" />
</p>


<h3 align=center>Table of Contents</h3>

<!-- mtoc-start -->

* [About 📚](#about-)
* [Features 🛠️](#features-)
* [Install and Compile ⚙️](#installation-)
* [Makefile rules 🔧](#makefile-rules-)
* [Link and Description 🔗](#link-and-description)


<!-- mtoc-end -->

<div/>



<div align=left>


# About 📚
___
libft is a custom C library developed as part of the 42 curriculum. It contains a collection of essential functions that are typically found in the C standard library, with some additional features.

> **Disclaimer**: This code base follows a peculiar coding style, to pass [Norminette](https://github.com/42School/norminette)'s' queer syntactical tests, a requirement for most projects at 42 School.

>> ❗ **Important**: If you happen to be a student at 42, you are encouraged to go through the process of writing these functions and testing them yourself. Feel free to use this repository as a research source, but beware of the `copy paste` monster! Do not use code you only understand partially, it will make later projects much harder to manage! If you passed the piscine you should be able to complete this project successfully. Be thorough, be persistent and be patient with yourself!

[libft Subject (English)](/libft.en.subject.pdf)

# Features 🛠️
___
- String manipulation functions
- Memory management functions
- Conversion functions
- List manipulation functions
- Diverse Bool functions

# Install and Compile ⚙️
___
1. To install libft, simply clone the repository and run the make command to compile the library.

```
git clone https://github.com/mmiguelo/Libft.git libft
```

2. Go inside the project folder and run `make`:

```
cd libft
make
```

3. To use the library on your code base `#include` the following header:

```c
#include "libft.h"
```

# Makefile rules 🔧
___
- To compile `libft` with **mandatory** files: `make`

- To compile `libft` with **bonus** files: `make bonus`

- To clean the working directory of **object files** (**.o**): `make clean`

- To clean the working directory of **object files** (**.o**) and **archive** (**.a**) files: `make fclean`

# Link and Description 🔗
___
<details>
	<summary style="font-size: 18px; font-weight: bold;">Mandatory Part 1 📝</summary>
<ul>
	
| Functions | Description |
| --------------- | --------------- |
| [ft_isalpha](https://github.com/mmiguelo/Libft/blob/main/ft_isalpha.c) | Checks if the character is alphabetic (a-z, A-Z). |
| [ft_isdigit](https://github.com/mmiguelo/Libft/blob/main/ft_isdigit.c) | Checks if the character is a digit (0-9). |
| [ft_isalnum](https://github.com/mmiguelo/Libft/blob/main/ft_isalnum.c) | Checks if the character is alphanumeric (a-z, A-Z, 0-9). |
| [ft_isascii](https://github.com/mmiguelo/Libft/blob/main/ft_isascii.c) | Checks if the character is a valid ASCII character (0-127). |
| [ft_isprint](https://github.com/mmiguelo/Libft/blob/main/ft_isprint.c) | Checks if the character is printable (space, punctuation, numbers, and letters). |
| [ft_strlen](https://github.com/mmiguelo/Libft/blob/main/ft_strlen.c) | Returns the length of a string (excluding the null terminator). |
| [ft_strlcpy](https://github.com/mmiguelo/Libft/blob/main/ft_strlcpy.c) | Copies a string into a buffer with a size limit, ensuring it’s null-terminated. |
| [ft_strlcat](https://github.com/mmiguelo/Libft/blob/main/ft_strlcat.c) | Appends a string to another with a size limit, ensuring it’s null-terminated. |
| [ft_strchr](https://github.com/mmiguelo/Libft/blob/main/ft_strchr.c) | Finds the first occurrence of a character in a string. |
| [ft_strrchr](https://github.com/mmiguelo/Libft/blob/main/ft_strrchr.c) | Finds the last occurrence of a character in a string. |
| [ft_strncmp](https://github.com/mmiguelo/Libft/blob/main/ft_strncmp.c) | Compares two strings up to a given number of characters. |
| [ft_strnstr](https://github.com/mmiguelo/Libft/blob/main/ft_strnstr.c) | Finds the first occurrence of a substring in a string, up to a given length. |
| [ft_bzero](https://github.com/mmiguelo/Libft/blob/main/ft_bzero.c) | Sets a block of memory to zero (clears memory). |
| [ft_calloc](https://github.com/mmiguelo/Libft/blob/main/ft_calloc.c) | Allocates memory and sets it to zero. |
| [ft_strdup](https://github.com/mmiguelo/Libft/blob/main/ft_strdup.c) | Duplicates a string by allocating memory and copying the string into it. |
| [ft_memset](https://github.com/mmiguelo/Libft/blob/main/ft_memset.c) | Fills a block of memory with a specific byte. |
| [ft_memcpy](https://github.com/mmiguelo/Libft/blob/main/ft_memcpy.c) | Copies a block of memory from one location to another. |
| [ft_memmove](https://github.com/mmiguelo/Libft/blob/main/ft_memmove.c) | Moves a block of memory from one location to another, handling overlapping memory regions. |
| [ft_memchr](https://github.com/mmiguelo/Libft/blob/main/ft_memchr.c) | Finds the first occurrence of a byte in a block of memory. |
| [ft_memcmp](https://github.com/mmiguelo/Libft/blob/main/ft_memcmp.c) | Compares two blocks of memory byte by byte. |
| [ft_toupper](https://github.com/mmiguelo/Libft/blob/main/ft_toupper.c) | Converts a lowercase character to uppercase. |
| [ft_tolower](https://github.com/mmiguelo/Libft/blob/main/ft_tolower.c) | Converts an uppercase character to lowercase. |
| [ft_atoi](https://github.com/mmiguelo/Libft/blob/main/ft_atoi.c) | Converts a string to an integer, handling optional white spaces and signs. |


</details>

___

<details>
	<summary style="font-size: 18px; font-weight: bold;">Mandatory Part 2 📝</summary>
	<ul>
	
| Functions | Description |
| --------------- | --------------- |
| [ft_substr](https://github.com/mmiguelo/Libft/blob/main/ft_substr.c) | Allocates and returns a substring from a string, starting at a specified index and having a limit. |
| [ft_strjoin](https://github.com/mmiguelo/Libft/blob/main/ft_strjoin.c) | Allocates and returns a new string by concatenating two strings. |
| [ft_strtrim](https://github.com/mmiguelo/Libft/blob/main/ft_strtrim.c) | Allocates and returns a new string, trimming the specified characters from both ends of a string. |
| [ft_split](https://github.com/mmiguelo/Libft/blob/main/ft_split.c) | Allocates and returns an array of strings by splitting a string at a given delimiter. |
| [ft_itoa](https://github.com/mmiguelo/Libft/blob/main/ft_itoa.c) | Converts an integer to a string representation. |
| [ft_strmapi](https://github.com/mmiguelo/Libft/blob/main/ft_strmapi.c) | Applies a function to each character of a string and returns a new string with the results. |
| [ft_striteri](https://github.com/mmiguelo/Libft/blob/main/ft_striteri.c) | Applies a function to each character of a string (with index) for side effects. |
| [ft_putchar_fd](https://github.com/mmiguelo/Libft/blob/main/ft_putchar_fd.c) | Writes a character to a given file descriptor. |
| [ft_putstr_fd](https://github.com/mmiguelo/Libft/blob/main/ft_putstr_fd.c) | Writes a string to a given file descriptor. |
| [ft_putendl_fd](https://github.com/mmiguelo/Libft/blob/main/ft_putendl_fd.c) | Writes a string followed by a newline to a given file descriptor. |
| [ft_putnbr_fd](https://github.com/mmiguelo/Libft/blob/main/ft_putnbr_fd.c) | Writes an integer as a string to a given file descriptor. |


</details>

___

<details>
	<summary style="font-size: 18px; font-weight: bold;">Bonus Part 📝</summary>
	<ul>

| Functions| Description|
| --------------- | --------------- |
| [ft_lstnew](https://github.com/mmiguelo/Libft/blob/main/ft_lstnew.c) | Creates a new list element (node) with the given content.|
| [ft_lstadd_front](https://github.com/mmiguelo/Libft/blob/main/ft_lstadd_front.c) | Adds a new element to the beginning of the list.|
| [ft_lstsize](https://github.com/mmiguelo/Libft/blob/main/ft_lstsize.c) | Returns the size (number of elements) of the list.|
| [ft_lstlast](https://github.com/mmiguelo/Libft/blob/main/ft_lstlast.c) | Returns the last element (node) of the list.|
| [ft_lstadd_back](https://github.com/mmiguelo/Libft/blob/main/ft_lstadd_back.c) | Adds a new element to the end of the list.|
| [ft_lstdelone](https://github.com/mmiguelo/Libft/blob/main/ft_lstdelone.c) | Deletes a single list element (node) and frees its memory.|
| [ft_lstclear](https://github.com/mmiguelo/Libft/blob/main/ft_lstclear.c) | Deletes all elements of the list and frees their memory.|
| [ft_lstiter](https://github.com/mmiguelo/Libft/blob/main/ft_lstiter.c) | Iterates over the list and applies a function to each element.|
| [ft_lstmap](https://github.com/mmiguelo/Libft/blob/main/ft_lstmap.c) | Iterates over the list and applies a function to each element, creating a new list with the results.|


</details>

<p align="right">(<a href="#readme-top">get to top</a>)</p>
