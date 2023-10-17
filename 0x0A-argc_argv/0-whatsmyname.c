#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This function prints the name of the program
 *              as it is executed, along with a new line.
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

	/* Suppress unused variable warning for argc */
	(void)argc;

	/* Print the program name from argv[0] */
	printf("%s\n", argv[0]);

	return (0);
}
