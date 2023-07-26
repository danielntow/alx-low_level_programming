#include "main.h"
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * print_buffer - Prints the content of a buffer.
 * @b: Pointer to the buffer.
 * @size: Size of the buffer.
 *
 * Description: This function prints the content of the buffer 'b'
 * and ASCII representation. It displays 10 bytes per line, starting from the
 * first byte of the buffer. For each line, it prints the position of the first
 * byte in hexadecimal, the hexadecimal content of the buffer
 * and the printable characters or '.' for non-printable characters.
 * size is not a multiple of 10, it will be padded with spaces.r
 * less, the output will be a new line '\n'.
 */
void print_buffer(char *b, int size)
{
	if (size <= 0)
	{
		printf("\n");
		return;
	}

	for (int i = 0; i < size; i += 10)
	{
		printf("%08x: ", i);

		for (int j = 0; j < 10; j++)
		{
			if (i + j < size)
				printf("%02x ", (unsigned char)b[i + j]);
			else
				printf("   ");
		}

		printf(" ");
		for (int j = 0; j < 10; j++)
		{
			if (i + j < size)
			{
				char c = b[i + j];

				if (isprint(c))

					printf("%c", c);
				else
					printf(".");
			}
			else
				break;
		}

		printf("\n");
	}
}

