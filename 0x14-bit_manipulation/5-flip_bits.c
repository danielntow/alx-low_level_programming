#include "main.h"
#include <stdio.h>

/**
 * flip_bits - Counts the number of bits needed to flip between two numbers
 * @n: First unsigned long int number
 * @m: Second unsigned long int number
 * Return: Number of bits that need to be flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_result = n ^ m;
	unsigned int count = 0;

	while (xor_result)
	{
		count +=
		    xor_result &
		    1; /* Increment count if the least significant bit is 1 */
		xor_result >>=
		    1; /* Right-shift xor_result to check the next bit */
	}

	return (count);
}
