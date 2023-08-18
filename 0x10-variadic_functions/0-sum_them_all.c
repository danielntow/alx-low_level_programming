#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * sum_them_all - Returns the sum of all its parameters.
 * @n: The number of arguments.
 * @...: The numbers to be summed.
 *
 * Return: The sum of all the numbers.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args; /* Declare a variable to hold the variable arguments */
	unsigned int i;
	int sum = 0;

	if (n == 0)
		return (0);

	va_start(args, n); /* Initialize the variable argument list */

	for (i = 0; i < n; i++)
	{
		int arg;

		arg = va_arg(args, int);

		sum += arg; /* Add the current number to the sum */
	}

	va_end(args); /* Clean up the variable argument list */

	return (sum);
}
