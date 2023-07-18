#include <stdio.h>

/**
* print_times_table - Prints the n times table, starting with 0.
*
* @n: The number of times to print the table.
*/
void print_times_table(int n)
{
int i, j;

if (n > 15 || n < 0)
	return;

for (i = 0; i <= n; i++)
{
	for (j = 0; j <= n; j++)
	{
		if (j == 0)
			printf("%d", i * j);
		else
			printf(", %d", i * j);
	}

	printf("\n");
}
}

