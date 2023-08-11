#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <stdlib.h>
#include <string.h>

/**
* _realloc - reallocates a memory block using malloc and free
* @ptr: a pointer to the memory previously allocated with malloc
* @old_size: the size, in bytes, of the allocated space for ptr
* @new_size: the new size, in bytes, of the new memory block
* Return: a pointer to the new memory block
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *ptr2;
	unsigned int x = 0;
	unsigned int dup_size;

	if (ptr == NULL)

		return (malloc(new_size));
	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size == old_size)
		return (ptr);
	ptr2 = malloc(new_size);
	if (ptr2 == NULL)
		return (NULL);
	dup_size = (old_size < new_size) ? old_size : new_size;
	while (x < dup_size)
	{
		*((char *)ptr2 + x) = *((char *)ptr + x);
		x++;
	}
	free(ptr);
	return (ptr2);
}
