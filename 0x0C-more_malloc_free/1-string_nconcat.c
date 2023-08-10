#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - Concatenates two strings with a specified length of s2.
 * @s1: The first string.
 * @s2: The second string.
 * @n: The number of bytes from s2 to concatenate.
 *
 * Return: A pointer to the newly allocated concatenated string.
 *         If memory allocation fails or s1/s2 is NULL, return NULL.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	unsigned int length_s1 = 0, length_s2 = 0;
	unsigned int i, j;

	if (s1 != NULL)
		length_s1 = strlen(s1);
	if (s2 != NULL)
		length_s2 = strlen(s2);

	if (n >= length_s2)
		n = length_s2;

	concat = (char *)malloc((length_s1 + n + 1) * sizeof(char));
	if (concat == NULL)
		return (NULL);

	for (i = 0; i < length_s1; i++)
		concat[i] = s1[i];

	for (j = 0; j < n; j++)
		concat[i + j] = s2[j];

	concat[i + j] = '\0';

	return (concat);
}

