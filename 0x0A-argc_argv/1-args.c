#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This function prints the number of command-line arguments
 *              passed to the program, followed by a new line.
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

	/* Suppress unused variable warning for argv */
	(void)argv;

	/* Print the number of command-line arguments */
	printf("%d\n", argc - 1);

	return (0);
}

