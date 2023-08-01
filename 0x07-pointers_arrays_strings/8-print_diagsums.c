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
	int main_diag_sum = 0;
	int anti_diag_sum = 0;

	for (int i = 0; i < size; i++)
	{
		main_diag_sum += a[i * size + i];
		anti_diag_sum += a[i * size + (size - 1 - i)];
	}

	printf(" %d, %d\n", main_diag_sum, anti_diag_sum);
}
