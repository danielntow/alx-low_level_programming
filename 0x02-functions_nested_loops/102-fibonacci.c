#include <stdio.h>

/**
* main - prints the first 50 Fibonacci numbers
*
* Return: 0? Yay, success.
*/

int main(void)
{
	long i = 0;
	long num1 = 0;
	long num2 = 1;
	long sum = 0;

	for (i = 0; i < 50; i++)
	{
		sum = num1 + num2;

		num1 = num2;
		num2 = sum;

		printf("%ld", sum);

		if (i == 49)
			break;
		printf(", ");
	}

	printf("\n");

	return (0);
}
