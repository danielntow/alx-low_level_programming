#include <string.h>
#include <stdio.h>


/**
 * puts2 - check the code
 * @str: Pointer to the input string.
 */

void puts2(char *str)
{
	int length, i;

	i = 0;

	length = strlen(str);

	while (i <= length - 1)
	{
		putchar(str[i]);
		i += 2;
	}
	putchar('\n');
}
