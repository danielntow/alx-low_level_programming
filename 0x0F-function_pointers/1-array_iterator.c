#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - prints an integer
 * @array: an array of integers
 * @size: the size of the array
 * @action: a function pointer
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int arrsize = (int) size;
	int i;

	if (action && array)
	{
		for (i = 0; i < arrsize; i++)
		{
			action(*(array + i));
		}
	}
}
