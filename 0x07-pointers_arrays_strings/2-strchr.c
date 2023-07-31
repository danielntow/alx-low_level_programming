#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strchr - Locates a character in a string.
 * @s: A pointer to the null-terminated string to be searched.
 * @c: The character to be found.
 *
 * Return: A pointer to the first occurrence of the character 'c' in the string
 * 's', or NULL if the character is not found.
 */
char *_strchr(char *s, char c)
{
	for (int i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}

	return (0);
}
