#include <stdio.h>
#include "main.h"

/**
 * print_number - Prints an integer to the standard output using _putchar.
 * @n: The integer to be printed.
 *
 * Return: void.
 */

void print_number(int n)
{
	if (n < 0)
	{
		putchar('-');
		n = -n;
	}

	int divisor = 1;
	int num = n;

	while (num >= 10)
	{
		divisor *= 10;
		num /= 10;
	}

	while (divisor != 0)
	{
		putchar('0' + n / divisor);
		n %= divisor;
		divisor /= 10;
	}
}
