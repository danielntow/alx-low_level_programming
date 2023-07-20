#include <stdio.h>

/**
 * main - Check the code
 *
 * Return: void
 */

int main(void)
{

	int i;

	for (i = 0; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0 && i != 0)
			printf("%s ", "FizzBuss");
		if (i % 3 == 0 && i != 0)
			printf("%s", "Fizz ");
		else if (i % 5 == 0 && i != 0)
			printf("%s ", "Buzz");
		else
			printf("%d ", i);
	}
	putchar('\n');

	return (0);
}
