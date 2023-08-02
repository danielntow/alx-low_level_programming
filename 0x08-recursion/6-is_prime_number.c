#include "main.h"
#include <stdio.h>


/**
 * primenum - check the code
 * @n: an integer type
 * @count: an integer type
 * Return: Always 0.
 */
int primenum(int n, int count)
{
	if (count == 1)
	{
		return (1);
	}
	else if (n % count == 0)
	{
		return (0);
	}
	count--;
	return (primenum(n, count));
}

/**
 * is_prime_number - check the code
 * @n: an integer
 * Return: Always 0.
 */
int is_prime_number(int n)
{
	int newvalue = n / 2 - 1;

	return (primenum(n, newvalue));
}
