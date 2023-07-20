#include <stdio.h>

/**
 * print_line - draws a straight line when it encounter a char
 *
 * @n: a number that determines the number of x a straight line is drawn
 */
void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
			putchar('-');
	}
	else
	{
		putchar('\n');
	}
	putchar('\n');
}
