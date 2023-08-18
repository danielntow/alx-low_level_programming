#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - Prints strings followed by a new line.
 * @separator: The string to be printed between the strings.
 * @n: The number of strings passed to the function.
 * @...: The strings to be printed.
 *
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args; /* Declare a variable to hold the variable arguments */
	unsigned int i;
	char *str;

	va_start(args, n); /* Initialize the variable argument list */

	for (i = 0; i < n; i++)
	{
		str = va_arg(args, char *); /* Get the current string pointer */

		if (str != NULL)
			printf("%s", str); /* Print the string */
		else
			printf("(nil)"); /* Print (nil) if the string is NULL */

		/* Print separator if it's not NULL and not the last element */
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}

	va_end(args); /* Clean up the variable argument list */

	printf("\n"); /* Print a new line at the end */
}

