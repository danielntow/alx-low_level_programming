#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Prints the sum of the two diagonals of a square matrix.
 * @a: Pointer to the first element of the square matrix.
 * @size: Size of the square matrix (number of rows and columns).
 *
 * Description: This function calculates and prints the sum of the main diagonl
 * and anti-diagonal of a square matrix of integers. The main diagonal runs fro
 * the top-left to the bottom-right of the matrix, while the anti-diagonal runs
 * from the top-right to the bottom-left.
 */

void print_diagsums(int *a, int size)
{
	int sum1, sum2, y;

	sum1 = 0;
	sum2 = 0;

	for (y = 0; y < size; y++)
	{
		sum1 = sum1 + a[y * size + y];
	}

	for (y = size - 1; y >= 0; y--)
	{
		sum2 += a[y * size + (size - y - 1)];
	}

	printf("%d, %d\n", sum1, sum2);
}
