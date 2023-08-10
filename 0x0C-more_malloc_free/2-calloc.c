#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array
 * @nmemb: number of elements in the array
 * @size: size of each element in bytes
 * Return: pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *array;
	unsigned int i, total;

	/* check if nmemb or size is 0 and return NULL */
	if (nmemb == 0 || size == 0)
		return (NULL);

	/* calculate the total size of the array in bytes */
	total = nmemb * size;

	/* allocate memory for the array using malloc */
	array = malloc(total);

	/* check if malloc failed and return NULL */
	if (array == NULL)
		return (NULL);

	/* set the memory to zero using a char pointer */
	for (i = 0; i < total; i++)
		((char *)array)[i] = 0;

	/* return the array */
	return (array);
}

