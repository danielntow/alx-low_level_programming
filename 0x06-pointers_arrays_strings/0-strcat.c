#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strcat - Concatenates two strings.
 * @dest: The destination string.
 * @src: The source string to be appended.
 *
 * Return: Pointer to the destination string.
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;
	size_t dest_size = sizeof(dest);
	size_t dest_len = strlen(dest);
	size_t src_len = strlen(src);

	// printf("Destination size: %zu\n", dest_size);
	// printf("Destination length: %zu\n", dest_len);
	// printf("Source length: %zu\n", src_len);

	while (src[i] != '\0')
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0'; // Null-terminate the concatenated string

	return (dest);

}

