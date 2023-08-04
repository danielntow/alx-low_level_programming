#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This function prints all the command-line arguments
 *              received by the program, including the program name,
 *              each on a separate line.
 *
 * @argc: The number of command-line arguments.
 * @argv: An array of strings containing the command-line arguments.
 *
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
	/**
	 * argc: The number of command-line arguments, including the program
	 * name. argv: An array of strings containing the command-line
	 * arguments. argv[0] is the program name.
	 */

	int i;

	/* Suppress unused variable warning for argc */
	(void)argc;

	/* Print each command-line argument on a separate line */
	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}

