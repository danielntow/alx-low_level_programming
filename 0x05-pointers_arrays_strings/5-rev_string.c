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
		// Swap characters at start and end positions
		temp = s[start];
		s[start] = s[end];
		s[end] = temp;

		// Move start and end positions towards the middle
		start++;
		end--;
	}
}

