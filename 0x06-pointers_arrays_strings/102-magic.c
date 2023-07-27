#include <stdio.h>

/**
 * main - Entry point of the program.
 *
 * Description: This function serves as the entry point of the program.
 * It initializes an array 'a', modifies the value of a[2] to 98 without
 * directly using the variable 'a', and then prints the modified value.
 *
 * Return: Always 0 (Success).
 */

int main(void)
{
	int n;
	int a[5];
	int *p;

	a[2] = 1024;
	p = &n;
	/*
	 * write your line of code here...
	 * Remember:
	 * - you are not allowed to use a
	 * - you are not allowed to modify p
	 * - only one statement
	 * - you are not allowed to code anything else than this line of code
	 */
	*(p + 5) = 98;
	/* ...so that this prints 98\n */
	printf("a[2] = %d\n", a[2]);
	return (0);
}