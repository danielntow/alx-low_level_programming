#include <stdio.h>

/**
 * print_array - Prints n elements of an integer array, followed by a new line.
 * @a: Pointer to the integer array.
 * @n: The number of elements to be printed.
 */

void print_array(int *a, int n)
{
int i;

	for (i = 0; i < n; i++)
	{
		if (n <= 0)
		{
			printf("\n");
			return;
		}
		printf("%d ", a[i]);
	}
	printf("%d\n", a[n - 1]);
}
