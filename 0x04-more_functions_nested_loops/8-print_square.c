#include <stdio.h>


/**
 * print_square - check the square
 *
 * @size: number by which the size is gotten
 * Return: the square of the number
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
		for (j = 0; j <= size; j++)
		{
			putchar('#');
		}

		putchar('\n');
	}
}
