#include "main.h"
#include <stdio.h>
/**
 * strtow - Splits a string into words.
 *
 * @str: The input string.
 *
 * Return: A pointer to an array of strings (words), or NULL on failure.
 */
char **strtow(char *str)
{

	char** words;
	int word_count;

	if (str == NULL || *str == '\0')
		return (NULL);

	word_count = count_words(str);
	words = (char **)malloc((word_count + 1) * sizeof(char *));

	if (words == NULL)
		return (NULL);

	int i, j, start, word_length;

	start = 0;
	word_length = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ')
		{
			if (word_length > 0)
			{
				words[j] = (char *)malloc((word_length + 1) * sizeof(char));
				if (words[j] == NULL)
				{
					for (int k = 0; k < j; k++)
						free(words[k]);
					free(words);
					return (NULL);
				}

				strncpy(words[j], str + start, word_length);
				words[j][word_length] = '\0';
				j++;
				word_length = 0;
			}
			start = i + 1;
		}
		else
		{
			word_length++;
		}
	}

	if (word_length > 0)
	{
		words[j] = (char*)malloc((word_length + 1) * sizeof(char));
		if (words[j] == NULL)
		{
			for (int k = 0; k < j; k++)
				free(words[k]);
			free(words);
			return (NULL);
		}

		strncpy(words[j], str + start, word_length);
		words[j][word_length] = '\0';
		j++;
	}

	words[j] = NULL;

	return (words);
}

