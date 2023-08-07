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
	char *array;
	int i, j;

	unsigned int len_s1 = strlen(s1);
	unsigned int len_s2 = strlen(s2);
	unsigned int length = len_s1 + len_s2;

	array = (char *)malloc(
	    (length + 1) * sizeof(char)); // Include space for the null-terminator

	if (array == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
	{
		array[i] = s1[i];
	}

	for (j = 0; s2[j] != '\0'; j++)
	{
		array[i + j] = s2[j];
	}

	array[i + j] = '\0'; // Null-terminate the concatenated string

	return (array);
}
