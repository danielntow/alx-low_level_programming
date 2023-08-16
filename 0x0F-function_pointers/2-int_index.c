#include <stddef.h>
#include <stdio.h>

/**
 * int_index - Searches for an integer in an array.
 * @array: The array to search in.
 * @size: The number of elements in the array.
 * @cmp: The function to compare values.
 *
 * Return: The index of the first element for which cmp doesn't return 0,
 *         or -1 if no element matches or if size is <= 0.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	/* Check if array is NULL or size is <= 0 */
	if (array == NULL || size <= 0)
		return (-1);


	int i;

	for (i = 0; i < size; i++)
	{
		/* Check if the cmp function doesn't return 0 for the current element */
		if (cmp(array[i]) != 0)
			return (i); /* Return the index of the matching element */
	}

	/* No element matched the condition, return -1 */
	return (-1);
}


