#include <string.h>
#include <stdio.h>
#include "main.h"

int _recurse(char *s, int n, int m);
/**
 * _recurse - check the code
 *@s: a pointer
 *@n: an int
 *@m: an int
 *Return: an integer
 */
int _recurse(char *s, int n, int m)
{
	if (n < 0)
	{
		return (1);
	}
	if (*(s + m) == *(s + n))
	{
		n--;
		m++;
	}
	else
	{
		return (0);
	}
	return (_recurse(s, n, m));
}

/**
 * is_palindrome - check the code
 * @s: a pointer
 * Return: an integer
 */
int is_palindrome(char *s)
{
	int n = strlen(s) - 1;

	return (_recurse(s, n, 0));
}
