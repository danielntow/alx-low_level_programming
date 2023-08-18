#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - Prints values of different types.
 * @format: The format string specifying types of arguments.
 * @...: The values to be printed.
 *
 * Return: void
 */
void print_all(const char *const format, ...)
{
	va_list args;
	unsigned int i = 0;
	char *separator = "";

	va_start(args, format);

	while (format && format[i])
	{
		switch (format[i])
		{
		case 'c':
			printf("%s%c", separator, va_arg(args, int));
			break;
		case 'i':
			printf("%s%d", separator, va_arg(args, int));
			break;
		case 'f':
			printf("%s%f", separator, va_arg(args, double));
			break;
		case 's':
		{
			char *str = va_arg(args, char*);

			if (str == NULL)
				str = "(nil)";
			printf("%s%s", separator, str);
		}
		break;
		}
		separator = ", ";
		i++;
		if (format[i] == '\0')
			break;
	}
	va_end(args);

	printf("\n");
}

