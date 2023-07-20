#include <stdio.h>


/**
 * print_square - check the square
 *
 * @size: number bywhich the size is gotten
 * Return: the square of the number
 */
void print_square(int size)
{
	int sq, i, j;

	sq = size * size;
	for (i = 0; i < size; i++)
	{
		for (j = 0; j <= size; j++)
		{
			putchar('#');
		}

		putchar('\n');
	}
}
