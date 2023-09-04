#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *allocate_buffer(char *filename);
void close_descriptor(int descriptor);

/**
 * allocate_buffer - Allocates 1024 bytes for a buffer.
 * @filename: The name of the file the buffer is associated with.
 *
 * Return: A pointer to the newly-allocated buffer.
 */
char *allocate_buffer(char *filename)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", filename);
		exit(99);
	}

	return (buffer);
}

/**
 * close_descriptor - Closes a file descriptor.
 * @descriptor: The file descriptor to be closed.
 */
void close_descriptor(int descriptor)
{
	int close_result;

	close_result = close(descriptor);

	if (close_result == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", descriptor);
		exit(100);
	}
}

