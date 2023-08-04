#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point of the program
 *
 * Description: This function calculates the minimum number of coins
 *              required to make change for the given amount of money.
 *
 * @argc: The number of command-line arguments.
 * @argv: An array of strings containing the command-line arguments.
 *
 * Return: 0 on success, 1 on error (invalid arguments or negative value)
 */
int main(int argc, char *argv[])
{
	int amount, coins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	/* Convert the argument to an integer */
	amount = atoi(argv[1]);

	/* Check if the amount is negative */
	if (amount < 0)
	{
		printf("0\n");
		return (0);
	}

	/* Calculate the minimum number of coins */
	while (amount > 0)
	{
		if (amount >= 25)
			amount -= 25;
		else if (amount >= 10)
			amount -= 10;
		else if (amount >= 5)
			amount -= 5;
		else if (amount >= 2)
			amount -= 2;
		else
			amount -= 1;

		coins++;
	}

	/* Print the result */
	printf("%d\n", coins);

	return (0);
}

