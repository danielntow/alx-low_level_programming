#include <stdio.h>

/**
 *print_line - checks the code
 *
 *@n: integer parameter
 *Return: Always 0.
 */

void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
			putchar('-');
	}
	putchar('\n');
}