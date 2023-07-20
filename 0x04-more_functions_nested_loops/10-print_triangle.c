#include <stdio.h>

/**
*print_traingle - check the code
*@size: to dermine the triangle
*Return: void
*/

void print_triangle(int size)
{

	int i = 0;
	int j = 0;
	int k = 0;

	if (size <= 0)
	{
		putchar('\n');
		return;
	}

	for (i = 0; i < size; i++)
	{
		for (k = size - i - 1; k > 0; k--)
		{
			putchar(' ');
		}

		for (j = 0; j <= i; j++)
		{

			putchar('#');
		}
		putchar('\n');
	}
}
