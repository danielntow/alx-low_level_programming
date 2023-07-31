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
	for (; *haystack != '\0'; haystack++)
	{
		if (*haystack == *needle)
			return (haystack);
	}
	return (0);
}
