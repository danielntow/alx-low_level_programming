#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 *print_line - check the code
 *@n: integer parameter
 * Return: Always 0.
 */
void print_line(int n)
{
	int i;

	for (i = 1; i <= n; i++)
	{
		putchar('_');
	}
	putchar('\n');
}
