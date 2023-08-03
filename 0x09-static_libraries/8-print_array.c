#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 *print_array - check the code
 *
 *@a: a pointer variable
 *@n:  integer variable
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", *(a + i));
		if (i < n - 1)
		{
			printf(", ");
		}
	}
	putchar('\n');
}
