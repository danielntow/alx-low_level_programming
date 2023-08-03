#include <stdio.h>

/**
 * _puts - Prints a string followed by a new line to stdout.
 * @str: Pointer to the input string to be printed.
 */

void _puts(char *str)
{
	int length = 0;

	while (str[length] != '\0')
	{
		putchar(str[length]);
		length++;
	}
	putchar('\n');
}
