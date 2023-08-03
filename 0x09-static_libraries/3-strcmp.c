#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */

int _strcmp(char* s1, char* s2);
int _strcmps(char* s1, char* s2);
int _strcmpss(char* s1, char* s2);
int _strcmpsss(char* s1, char* s2);
int main(void)
{
	char s1[] = "Hello";
	char s2[] = "World!";

	printf("%d\n", _strcmp(s1, s2));
	printf("%d\n", _strcmp(s2, s1));
	printf("%d\n", _strcmp(s1, s1));
	return (0);
}
int _strcmps(char* s1, char* s2)
{
	int i = 0, j = 0;
	int len_s1 = strlen(s1);
	int len_s2 = strlen(s2);

	for (i = 0, j = 0; i < len_s1 && j < len_s2; i++, j++)
	{
		if (s1[i] != s2[j])
		{
			return (s1[i] - s2[j]);
		}
	}
	return (s1[i] - s2[j]);
}

int _strcmp(char* s1, char* s2)
{
	while (*s1 != '\0' && *s2 != '\0')
	{
		if (*s1 != *s2)
		{
			return (*s1 - *s2);
		}
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

int _strcmpss(char* s1, char* s2)
{
	int i = 0;
	/* Continue comparing characters until a difference is found or one of
	 * the strings ends */
	while (s1[i] == s2[i])
	{
		/* If both strings end at the same position, they are equal, so
		 * return 0 */
		if (s1[i] == '\0')
			return (0);

		i++; /* Move to the next character */
	}

	/* If there is a difference between the characters, return the
	 * difference of their ASCII values */
	return s1[i] - s2[i];
}

int _strcmpsss(char* s1, char* s2)
{
	int i = 0;

	for (i = 0; s1[i] == s2[i]; i++)
	{
		if (s1[i] == '\0')
			return (0);
	}
	return s1[i] - s2[i];
}
