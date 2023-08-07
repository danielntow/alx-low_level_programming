#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - Concatenates two strings.
 * @s1: The first string.
 * @s2: The second string.
 *
 * Return: On success, returns a pointer to the concatenated string.
 *         Returns NULL if memory allocation fails.
 */
char *str_concat(char *s1, char *s2)
{
	int i, len1, len2;


	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	len1 = strlen(s1);
	len2 = strlen(s2);

	char *new_str = malloc(len1 + len2 + 1);

	for (i = 0; i < len1; i++)
	{
		new_str[i] = s1[i];
	}

	for (i = 0; i < len2; i++)
	{
		new_str[len1 + i] = s2[i];
	}

	new_str[len1 + len2] = '\0';

	return (new_str);
}

