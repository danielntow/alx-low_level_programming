#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the name of the file it was compiled from.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char *file_name;
	unsigned int i;

	file_name = __FILE__;

	for (i = 0; file_name[i] != '\0'; i++)
	{
		if (file_name[i] == '\0')
			return (file_name[i] = '\0');
		putchar(file_name[i]);
	}

	putchar('\n');

	return (0);
}

