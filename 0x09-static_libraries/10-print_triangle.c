#include <stdio.h>

#include "main.h"

/**
 *print_triangle - check the code
 *@size: first return type
 * Return: Always 0.
 */
void print_triangle(int size)
{
	int i;
	int j;
	int k = 0;

	for (i = 1; i <= size; i++)
	{
		for (j = 1; j <= size; j++)
		{
			if (j >= size - k)
			{
				_putchar('#');
			}
			else
			{
				_putchar(' ');
			}
		}
		k++;
		_putchar('\n');
	}
	if (size <= 0)
	{
		_putchar('\n');
	}
}
