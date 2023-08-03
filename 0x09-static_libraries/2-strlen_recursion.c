#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion - Calculate the length of a string using recursion.
 *
 * @s: A pointer to the string.
 *
 * Return: The length of the string.
 */

int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s == '\0')
	{
		return (0);
	}
	if (*s != '\0')
	{
		s++;
		len = 1 + _strlen_recursion(s);
	}
	return (len);
}

