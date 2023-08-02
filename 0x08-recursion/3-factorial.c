#include "main.h"
#include <stdio.h>

/**
 * factorial - Calculate the factorial of a given number.
 *
 * @n: The number for which factorial is to be calculated.
 *
 * Return: The factorial of the number, or -1 for an error (if n is negative).
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);

	if (n == 0)
		return (1);

	return (n * factorial(n - 1));
}
