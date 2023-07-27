#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * rot13 - Encodes a string using ROT13.
 * @str: The input string.
 *
 * Return: A pointer to the modified string.
 */
char *rot13(char *str)
{
	int i = 0;
	int j;
	char *alphabets =
	    "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *rot13_alphabets =
	    "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	while (str[i] != '\0')
	{
		j = 0;

		while (alphabets[j] != '\0')
		{
			if (str[i] == alphabets[j])
			{
				str[i] = rot13_alphabets[j];
				break;
			}

			j++;
		}

		i++;
	}

	return (str);
}
