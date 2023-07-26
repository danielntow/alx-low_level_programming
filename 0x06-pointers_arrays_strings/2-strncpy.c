#include "main.h"

/**
 * _strncpy - Copies a string, up to n characters, from the source to the
 * destination buffer.
 * @dest: Pointer to the destination buffer where the string will be copied.
 * @src: Pointer to the source string from where the characters will be copied.
 * @n: The maximum number of characters to be copied from the source string.
 *
 * Return: A pointer to the destination buffer.
 *
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}

	return (dest);
}

