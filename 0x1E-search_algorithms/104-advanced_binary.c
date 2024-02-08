#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * advanced_binary - Searches for a value in a sorted array
 *                   using the Advanced Binary search algorithm
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in the array
 * @value: Value to search for
 *
 * Return: The index where the value is located,
 *         or -1 if not present or if the array is NULL
 */
int advanced_binary(int *array, size_t size, int value)
{
    if (array == NULL || size == 0)
        return -1;

    return (my_binary_search(array, 0, size - 1, value));
}

/**
 * binary_search - Searches for a value in a sorted array
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

    if (low > high)
        return (-1);

    printf("Searching in array: %d", array[low]);

    for (i = low + 1; i <= high; i++)
        printf(", %d", array[i]);

    printf("\n");

    mid = low + (high - low) / 2;

    if (array[mid] == value)
    {
        if (mid == low || array[mid - 1] != value)
            return (mid);
        else
            return (my_binary_search(array, low, mid, value));
    }
    else if (array[mid] < value)
        return (my_binary_search(array, mid + 1, high, value));
    else
        return (my_binary_search(array, low, mid - 1, value));
}
