#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point of the program
 *
 * Description: This function adds positive numbers provided as command-line
 *              arguments and prints the result, followed by a new line.
 *
 * @argc: The number of command-line arguments.
 * @argv: An array of strings containing the command-line arguments.
 *
 * Return: 0 on success, 1 on error (invalid arguments or non-positive number)
 */
int main(int argc, char *argv[])
{
	/**
	 * argc: The number of command-line arguments, including the program
	 * name. argv: An array of strings containing the command-line
	 * arguments. argv[0] is the program name.
	 */

	int sum = 0;
	int i;

	/* Check if no number is passed to the program */
	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	/* Iterate through the arguments and calculate the sum */

	for (i = 1; i < argc; i++)
	{
		int j = 0;

		while (argv[i][j])
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
			j++;
		}

		sum += atoi(argv[i]);
	}

	/* Print the result */
	printf("%d\n", sum);

	return (0);
}

