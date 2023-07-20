#include <stdio.h>

/**
 *print_square - check the code
 *@size: integer return type
 * Return: Always 0.
 */
void print_square(int size)
{
	int i, j;

	if (size <= 0)
	{
		putchar('\n');
		return;
	}

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			putchar('#');
		}

		putchar('\n');
	}
}
