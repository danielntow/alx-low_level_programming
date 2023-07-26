#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * leet - Encodes a string into 1337.
 * @str: The input string.
 *
 * Return: A pointer to the modified string.
 */

char *leet(char *str)
{
	int i;
	char *leet_chars = "43071";

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == 'a' || str[i] == 'A')
		{
			str[i] = leet_chars[0];
		}
		else if (str[i] == 'e' || str[i] == 'E')
		{
			str[i] = leet_chars[1];
		}
		else if (str[i] == 'o' || str[i] == 'O')
		{
			str[i] = leet_chars[2];
		}
		else if (str[i] == 't' || str[i] == 'T')
		{
			str[i] = leet_chars[3];
		}
		else if (str[i] == 'l' || str[i] == 'L')
		{
			str[i] = leet_chars[4];
		}
	}

	return (str);
}
