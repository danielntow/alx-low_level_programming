#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - Creates an array of chars and initializes it with a specific
 * char.
 * @size: The size of the array to be created.
 * @c: The char with which to initialize the array elements.
 *
 * Return: If size is 0 or memory allocation fails, returns NULL.
 *         Otherwise, returns a pointer to the created array.
 */


char *create_array(unsigned int size, char c)
{
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	char *array = (char *)malloc(size * sizeof(char));

	if (array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}

	return (array);
}
