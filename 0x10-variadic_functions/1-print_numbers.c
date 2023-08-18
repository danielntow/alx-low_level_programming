#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - Prints numbers followed by a new line.
 * @separator: The string to be printed between numbers.
 * @n: The number of integers passed to the function.
 * @...: The integers to be printed.
 *
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args; /* Declare a variable to hold the variable arguments */
	unsigned int i;

	va_start(args, n); /* Initialize the variable argument list */

	for (i = 0; i < n; i++)
	{
		/* Print the current number */
		printf("%d", va_arg(args, int));

		/* Print separator if it's not NULL and not the last element */
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}

	va_end(args); /* Clean up the variable argument list */

	printf("\n"); /* Print a new line at the end */
}

