#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

/**
 * create_file - Creates a file with specified permissions and writes text to it.
 * @filename: The name of the file to create or open.
 * @text_content: A NULL-terminated string to write to the file.
 *
 * Return: 1 on success, -1 on failure (file cannot be created, written, etc.).
 * The created file has permissions: rw-------. If the file already exists, it
 * will be truncated. If filename is NULL, return -1. If text_content is NULL,
 * create an empty file.
 */

int create_file(const char *filename, char *text_content)
{
	if (filename == NULL)
		return (-1);

	int fd =
	    open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600); /* rw------- */

	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		ssize_t bytes_written =
		    write(fd, text_content, strlen(text_content));
		if (bytes_written == -1)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}
