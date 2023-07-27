#include <stdio.h>
#include "main.h"

/**
 * print_number - Prints an integer to the standard output using _putchar.
 * @num: The integer to be printed.
 *
 * Return: void.
 */

void print_number(int num)
{
	if (num < 0)
	{
		putchar('-');
		num = -num;
	}

	int thousands_digit = num / 1000;
	int hundreds_digit = (num / 100) % 10;
	int tens_digit = (num / 10) % 10;
	int ones_digit = num % 10;

	if (thousands_digit != 0)
		putchar('0' + thousands_digit);

	if (hundreds_digit != 0 || thousands_digit != 0)
		putchar('0' + hundreds_digit);

	if (tens_digit != 0 || hundreds_digit != 0 || thousands_digit != 0)
		putchar('0' + tens_digit);

	putchar('0' + ones_digit);
}

