#include <stdio.h>

/**
 * print_numbers - print interger values from 0 -9
 *
 */

void print_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
	}
	putchar('\n');
}
