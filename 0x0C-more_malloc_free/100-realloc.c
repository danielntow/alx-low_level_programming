
#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _realloc - Reallocate a memory block using malloc and free
 * @ptr: Pointer to the memory previously allocated with malloc
 * @old_size: Size, in bytes, of the allocated space for ptr
 * @new_size: New size, in bytes, of the new memory block
 *
 * Return: Pointer to the newly allocated memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
	{
		return (malloc(new_size));
	}

	if (new_size == old_size)
	{
		return (ptr);
	}

	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
	{
		return (NULL);
	}

	unsigned int copy_size = (old_size < new_size) ? old_size : new_size;
	char *old_ptr = (char *)ptr;
	char *new_ptr_char = (char *)new_ptr;

	for (unsigned int i = 0; i < copy_size; i++)
	{
		new_ptr_char[i] = old_ptr[i];
	}

	free(ptr);

	return (new_ptr);
}

