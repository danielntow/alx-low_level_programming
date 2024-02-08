#include "search_algos.h"

/**
* interpolation_search - Searches for a value in a sorted
* array using Interpolation search algorithm
* @array: Pointer to the first element of the array to search in
* @size: Number of elements in the array
* @value: Value to search for
*
* Return: The index where the value is located,
* or -1 if not present or if the array is NULL
*/
int interpolation_search(int *array, size_t size, int value)
{
int high = (int)size - 1;
int low = 0;
int position;

if (array == NULL || size == 0)
	return -1;

position = low + (((double)(high - low) / (array[high] - array[low])) * (value - array[low]));

if (position > (int)size - 1)
{
	printf("Value checked array[%d] is out of range\n", position);
}

while (array[high] != array[low] && value <= array[high] && value >= array[low])
{
	position = low + (((double)(high - low) / (array[high] - array[low])) * (value - array[low]));

	printf("Value checked array[%d] = [%d]\n", position, array[position]);

	if (array[position] < value)
		low = position + 1;
	else if (array[position] > value)
		high = position - 1;
	else
		return (position);
}

if (value == array[low])
{
	printf("Value checked array[%d] = [%d]\n", low, array[low]);
	return (low);
}
else
{
	return (-1);
}
}

