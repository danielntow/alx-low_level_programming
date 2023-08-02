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
	if (*s == '\0')
	{
		return (0);
	}

	return (1 + _strlen_recursion(s + 1));
}
