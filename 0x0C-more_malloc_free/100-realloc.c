
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
    void *new_ptr;
    unsigned int min_size;

    /* if ptr is NULL, call is equivalent to malloc(new_size) */
    if (ptr == NULL)
        return (malloc(new_size));

    /* if new_size is zero and ptr is not NULL, call is equivalent to free(ptr) */
    if (new_size == 0 && ptr != NULL)
    {
        free(ptr);
        return (NULL);
    }

    /* if new_size is equal to old_size, do not do anything and return ptr */
    if (new_size == old_size)
        return (ptr);

    /* allocate memory for the new block using malloc */
    new_ptr = malloc(new_size);

    /* check if malloc failed and return NULL if true */
    if (new_ptr == NULL)
        return (NULL);

    /* find the minimum of old and new sizes */
    min_size = old_size < new_size ? old_size : new_size;

    /* copy the contents of the old block to the new block */
    memcpy(new_ptr, ptr, min_size);

    /* free the old block */
    free(ptr);

    /* return the pointer to the new block */
    return (new_ptr);
}
