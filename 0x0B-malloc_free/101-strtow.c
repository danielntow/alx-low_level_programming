#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * is_space - Check if a character is a space, tab, or newline.
 * @c: The character to check.
 *
 * Return: 1 if the character is a space, tab, or newline, 0 otherwise.
 */
int is_space(char c) { return c == ' ' || c == '\t' || c == '\n'; }

/**
 * count_words - Count the number of words in a string.
 * @str: The input string.
 *
 * Return: The number of words in the string.
 */
int count_words(char *str)
{
	int count, in_word, i;

	count = 0;
	in_word = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (!is_space(str[i]) && !in_word)
		{
			in_word = 1;
			count++;
		}
		else if (is_space(str[i]))
		{
			in_word = 0;
		}
	}

	return (count);
}

/**
 * strtow - Split a string into words.
 * @str: The input string.
 *
 * Return: A pointer to an array of strings (words).
 */
char **strtow(char *str)
{
	int num_words, word_index, word_start, in_word;
	char **words;


	word_index = 0;
	word_start = 0;
	in_word = 0;

	if (str == NULL || *str == '\0')
		return (NULL);

	num_words = count_words(str);
	words = (char **)malloc((num_words + 1) * sizeof(char *));
	if (words == NULL)
		return (NULL);

	for (int i = 0; str[i] != '\0'; i++)
	{
		if (!is_space(str[i]) && !in_word)
		{
			in_word = 1;
			word_start = i;
		}
		else if ((is_space(str[i]) || str[i + 1] == '\0') && in_word)
		{
			in_word = 0;
			int word_length = (i - word_start) + 1;

			words[word_index] =
			    (char *)malloc(word_length * sizeof(char));
			if (words[word_index] == NULL)
			{
				for (int j = 0; j < word_index; j++)
					free(words[j]);
				free(words);
				return (NULL);
			}

			strncpy(words[word_index], &str[word_start],
				word_length - 1);
			words[word_index][word_length - 1] = '\0';
			word_index++;
		}
	}

	words[num_words] = NULL;

	return (words);
}
