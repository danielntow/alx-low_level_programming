#include "main.h"

/**
 * _strstr - finds the first occurrence of a substring in a string
 * @haystack: pointer to the null-terminated string to be searched
 * @needle: pointer to the null-terminated substring to be found
 *
 * Return: a pointer to the beginning of the located substring,
 *         or NULL if the substring is not found
 */

char *_strstr(char *haystack, char *needle)
{
	char *hay_ptr, *needle_ptr;

	while (*haystack != '\0')
	{
		hay_ptr = haystack;
		needle_ptr = needle;

		while (*hay_ptr == *needle_ptr && *needle_ptr != '\0')
		{
			hay_ptr++;
			needle_ptr++;
		}

		if (*needle_ptr == '\0')
			return (haystack);

		haystack++;
	}

	return (0);

}
