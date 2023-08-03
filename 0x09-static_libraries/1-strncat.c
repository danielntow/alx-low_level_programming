#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
char* _strncat(char* dest, char* src, int n);
char* my_strncat(char* dest, char* src, int n);
char* _strncats(char* dest, char* src, int n);
int main(void)
{
	char s1[98] = "Hello ";
	char s2[] = "World!\n";
	char* ptr;

	printf("%s\n", s1);
	printf("%s", s2);
	ptr = _strncat(s1, s2, 1);
	printf("%s\n", s1);
	printf("%s", s2);
	printf("%s\n", ptr);
	ptr = _strncat(s1, s2, 1024);
	printf("%s", s1);
	printf("%s", s2);
	printf("%s", ptr);
	return (0);
}

char* _strncats(char* dest, char* src, int n)
{
	int dest_len = strlen(dest);
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[dest_len] = src[i];
		dest_len++;
	}
	dest[dest_len] = '\0';

	return (dest);
}

char* _strncat(char* dest, char* src, int n)
{
	char* result = dest; // Save the initial address of dest for return

	// Find the end of the destination string
	while (*dest != '\0')
	{
		dest++;
	}

	// Concatenate at most n bytes from src to dest
	for (int i = 0; i < n && src[i] != '\0'; i++)
	{
		*dest++ = src[i];
		// n--;
	}

	// Add null-terminator to the concatenated string
	*dest = '\0';

	return result; // Return the initial address of dest
}

char* my_strncat(char* dest, char* src, int n)
{
	char* result = dest; // Save the initial address of dest for return

	// Find the end of the destination string
	while (*dest != '\0')
	{
		dest++;
	}

	// Concatenate at most n bytes from src to dest
	while (n > 0 && *src != '\0')
	{
		*dest++ = *src++;
		n--;
	}

	// Add null-terminator to the concatenated string
	*dest = '\0';

	return result; // Return the initial address of dest
}
