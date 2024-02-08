#include "search_algos.h"

/**
* exponential_search - Searches for a value in a sorted array
*                      using the Exponential search algorithm
* @array: Pointer to the first element of the array to search in
* @size: Number of elements in the array
* @value: Value to search for
*
* Return: The index where the value is located,
*         or -1 if not present or if the array is NULL
*/
int exponential_search(int *array, size_t size, int value)
{
int bound = 1;
int low, high;

if (array == NULL || size == 0)
	return (-1);

while (bound < (int)size && array[bound] < value)
{
	printf("Value checked array[%d] = [%d]\n", bound, array[bound]);
	bound *= 2;
}

low = bound / 2;
high = (bound < (int)size) ? bound : (int)size - 1;

printf("Value found between indexes [%d] and [%d]\n", low, high);

return (my_binary_search(array, low, high, value));
}

/**
* my_binary_search - Searches for a value in a sorted array
*                 using the Binary search algorithm
* @array: Pointer to the first element of the array to search in
* @low: Lower bound of the search range
* @high: Upper bound of the search range
* @value: Value to search for
*
* Return: The index where the value is located,
*         or -1 if not present in the specified range
*/
int my_binary_search(int *array, int low, int high, int value)
{
int mid, i;

while (low <= high)
{
	mid = low + (high - low) / 2;
	printf("Searching in array: %d", array[low]);

	for (i = low + 1; i <= high; i++)
		printf(", %d", array[i]);

	printf("\n");

	if (array[mid] == value)
		return (mid);
	else if (array[mid] < value)
		low = mid + 1;
	else
		high = mid - 1;
}

return (-1);
}
