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

	unsigned int thousands_digit = n / 1000;
	unsigned int hundreds_digit = (n / 100) % 10;
	unsigned int tens_digit = (n / 10) % 10;
	unsigned int ones_digit = n % 10;

	if (thousands_digit != 0)
		putchar('0' + thousands_digit);

	if (hundreds_digit != 0 || thousands_digit != 0)
		putchar('0' + hundreds_digit);

	if (tens_digit != 0 || hundreds_digit != 0 || thousands_digit != 0)
		putchar('0' + tens_digit);

	putchar('0' + ones_digit);
}
