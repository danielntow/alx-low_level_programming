# Dynamic Library (libdynamic)

## Overview

This is a dynamic library (shared library) containing a collection of useful functions. Dynamic libraries allow you to share common code across multiple programs, reducing code duplication and making maintenance easier.

## Functions

The library contains the following functions:

- `int _putchar(char c)`: Write a character to the standard output.

- `int _islower(int c)`: Check if a character is lowercase.

- `int _isalpha(int c)`: Check if a character is alphabetic.

- `int _abs(int n)`: Compute the absolute value of an integer.

- `int _isupper(int c)`: Check if a character is uppercase.

- `int _isdigit(int c)`: Check if a character is a digit.

- `int _strlen(char *s)`: Calculate the length of a string.

- `void _puts(char *s)`: Print a string to the standard output.

- `char *_strcpy(char *dest, char *src)`: Copy a string.

- `int _atoi(char *s)`: Convert a string to an integer.

- `char *_strcat(char *dest, char *src)`: Concatenate two strings.

- `char *_strncat(char *dest, char *src, int n)`: Concatenate two strings up to `n` characters.

- `char *_strncpy(char *dest, char *src, int n)`: Copy `n` characters from one string to another.

- `int _strcmp(char *s1, char *s2)`: Compare two strings.

- `char *_memset(char *s, char b, unsigned int n)`: Fill memory with a constant byte.

- `char *_memcpy(char *dest, char *src, unsigned int n)`: Copy memory area.

- `char *_strchr(char *s, char c)`: Locate a character in a string.

- `unsigned int _strspn(char *s, char *accept)`: Get the length of a prefix substring.

- `char *_strpbrk(char *s, char *accept)`: Search a string for any set of bytes.

- `char *_strstr(char *haystack, char *needle)`: Locate a substring in a string.

## Building the Library

To build the dynamic library, you can compile the source files using the provided makefile. Run the following command:


