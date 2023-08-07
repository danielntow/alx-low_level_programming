#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * argstostr - Concatenates all the arguments of the program.
 *
 * @ac: The argument count.
 * @av: The array of argument strings.
 *
 * Return: On success, returns a pointer to the concatenated string.
 *         Returns NULL if ac is 0 or av is NULL, or if memory allocation
 */


char *argstostr(int ac, char **av)
{
	int i, j, total_length, position;
	char *concatenated;

	if (ac == 0 || av == NULL)
		return (NULL);

	total_length = 0;


	for (i = 0; i < ac; i++)
	{
		total_length += strlen(av[i]) + 1;
	}

	concatenated = (char *)malloc(total_length * sizeof(char));

	if (concatenated == NULL)
		return (NULL);

	position = 0;

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			concatenated[position++] = av[i][j];
		}
		concatenated[position++] = '\n';
	}

	concatenated[position] = '\0';

	return (concatenated);
}

