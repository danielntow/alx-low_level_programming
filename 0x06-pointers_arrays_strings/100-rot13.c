#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * rot13 - Encodes a string using ROT13.
 * @str: The input string.
 *
 * Return: A pointer to the modified string.
 */
char *rot13(char *str)
{
	char *ptr = str;

	while (*ptr)
	{
		char rot_offset;

		if ((*ptr >= 'A' && *ptr <= 'Z') ||
		    (*ptr >= 'a' && *ptr <= 'z'))
		{
			if ((*ptr >= 'a' && *ptr <= 'z'))
				rot_offset = 'a';
			else
				rot_offset = 'A';

			*ptr = ((*ptr - rot_offset + 13) % 26) + rot_offset;
		}

		ptr++; // Move to the next character
	}

	return (str); // Return the modified string
}

