#include <string.h>
#include <stdio.h>

/**
 * puts_half - check the code
 * @str: Pointer to the input string.
 */

void puts_half(char *str)
{
int length = strlen(str);

	int half_length = (length - 1) / 2;
	int i;

	for (i = half_length + 1; i < length; i++)
	{
		putchar(str[i]);
	}
	putchar('\n');
}
