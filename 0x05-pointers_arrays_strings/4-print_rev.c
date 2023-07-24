#include <stdio.h>

/**
 * print_rev - Prints a string in reverse, followed by a new line.
 * @s: Pointer to the input string.
 */

void print_rev(char *s)

{
	int length = 0;

	while (s[length] != '\0')
	{
		length++;
	}

	int i;
	for (i = length - 1; i >= 0; i--)
	{
		putchar(s[i]);
	}

	putchar('\n');
}

