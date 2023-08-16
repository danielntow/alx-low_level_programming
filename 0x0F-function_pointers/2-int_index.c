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
	int i;

	if (size < 0)
		return (-1);

	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(*(array + i)) != 0)
			{
				return (i);
			}
		}
	}
	return (-1);
}


