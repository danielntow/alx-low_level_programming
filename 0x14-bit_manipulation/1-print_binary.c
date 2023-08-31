#include <stdio.h>

/**
 * print_binary - prints the binary representation of a number
 * @n: unsigned long int number to be printed
 */
void print_binary(unsigned long int n)
{
	/* Base case: If n is <= 1, print the LSB and return */
	if (n > 1)
		print_binary(
		    n >> 1); /* Shift n right by 1 to process the next bit */

	/* Print the LSB of n by performing bitwise AND with 1 and adding '0' */
	putchar((n & 1) + '0');
}
