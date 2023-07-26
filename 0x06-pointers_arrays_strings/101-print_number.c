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
	int divisor = 1;
	int num;

	if (n < 0)
	{
		putchar('-');
		n = -n;
	}

	num = n;
	while (num >= 10)
	{
		divisor *= 10;
		num /= 10;
	}

	num = n;
	while (divisor != 0)
	{
		putchar('0' + num / divisor);
		num %= divisor;
		divisor /= 10;
	}
}

