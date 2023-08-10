#include "main.h"

#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: the minimum value (included) in the array
 * @max: the maximum value (included) in the array
 * Return: a pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int *array;
	int i, size;

	/* check if min is greater than max and return NULL if true */
	if (min > max)
		return (NULL);

	/* calculate the size of the array based on min and max */
	size = max - min + 1;

	/* allocate memory for the array using malloc */
	array = malloc(sizeof(int) * size);

	/* check if malloc failed and return NULL if true */
	if (array == NULL)
		return (NULL);

	/* fill the array with values from min to max using a for loop */
	for (i = 0; i < size; i++)
		array[i] = min + i;

	/* return the pointer to the array */
	return (array);
}
