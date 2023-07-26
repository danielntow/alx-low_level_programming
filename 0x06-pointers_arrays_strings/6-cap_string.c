#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * string_toupper - Changes all lowercase letters of a string to uppercase.
 * @str: The input string.
 *
 * Return: A pointer to the modified string.
 */

char *string_toupper(char *str)
{
	int i, length;

	char start = 'a';
	char end = 'z';

	length = strlen(str);

	for (i = 0; i < length; i++)
	{
		if (str[i] >= start && str[i] <= end)
		{
			str[i] -= 32;
		}
	}

	return (str);
}
