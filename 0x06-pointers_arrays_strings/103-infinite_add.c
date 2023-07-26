#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * infinite_add - Adds two numbers represented as strings.
 * @n1: The first number as a string.
 * @n2: The second number as a string.
 * @r: The buffer to store the result of the addition.
 * @size_r: The size of the buffer 'r'.
 *
 * Description: This function takes two positive numbers,
 * adds them digit by digit, and the result in the buffer 'r'. It handles
 * cases where the result cannot fit in the buffer and returns 0 in such cases.
 *
 * Return: A pointer to the resulting string 'r', or 0
 */



char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int carry = 0;
	int sum;
	int idx_r = size_r - 1;

	r[idx_r] = '\0';

	for (int idx_n1 = strlen(n1) - 1, idx_n2 = strlen(n2) - 1;
	     idx_n1 >= 0 || idx_n2 >= 0; idx_n1--, idx_n2--)
	{
		sum = carry;
		if (idx_n1 >= 0)
			sum += n1[idx_n1] - '0';
		if (idx_n2 >= 0)
			sum += n2[idx_n2] - '0';

		carry = sum / 10;

		if (idx_r > 0)
			r[--idx_r] = sum % 10 + '0';
		else if (sum % 10 != 0)
			return (0);
	}

	if (carry != 0)
	{
		if (idx_r > 0)
			r[--idx_r] = carry + '0';
		else
			return (0);
	}

	if (idx_r > 0)
		memmove(r, &r[idx_r], size_r - idx_r);

	return (r);
}
