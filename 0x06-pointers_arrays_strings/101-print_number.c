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

	if (n < 10)
	{
		putchar('0' + n);
		return;
	}

	print_number(n / 10);
	putchar('0' + n % 10);
}
