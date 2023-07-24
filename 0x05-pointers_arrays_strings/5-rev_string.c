#include <stdio.h>
#include <string.h>

/**
 * rev_string - Reverses the input string in place.
 * @s: Pointer to the input string to be reversed.
 */

void rev_string(char *s)

{
	int length = strlen(s);
	int i;

	for (i = length - 1; i >= 0; i--)
	{
		*s = (s[i]);
	}

	putchar('\n');
}

