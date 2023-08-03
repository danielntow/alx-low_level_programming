#include <stdio.h>
#include <string.h>

/**
 * rev_string - Reverses the input string in place.
 * @s: Pointer to the input string to be reversed.
 */

void rev_string(char *s)
{
	int length = strlen(s);
	int start = 0;
	int end = length - 1;
	char temp;

	while (start < end)
	{
		temp = s[start];
		s[start] = s[end];
		s[end] = temp;

		start++;
		end--;
	}
}

