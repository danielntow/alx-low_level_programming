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
	unsigned int i;
	va_list args;

	/* Check if the number of strings is 0 or separator is NULL */
	if (!n || !separator)
		return;

	va_start(args, n); /* Initialize the variable argument list */

	for (i = 0; i < n; i++)
	{
		char *arg;

		arg = va_arg(args, char *);

		/* Replace NULL strings with "(nil)" */
		if (arg == NULL)
			arg = "(nil)";

		/* Print the current string */
		printf("%s", arg);

		/* Print separator if it's not NULL and not the last element */
		if (i < n - 1 && separator != NULL)
			printf("%s", separator);
	}

	va_end(args); /* Clean up the variable argument list */

	putchar('\n'); /* Print a new line at the end */
}

