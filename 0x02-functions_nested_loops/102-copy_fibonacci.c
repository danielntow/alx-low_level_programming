#include <stdio.h>

/**
* main - Prints the first 50 Fibonacci numbers
*
* Return: Always 0
*/
int main(void)
{
int i;
int fib[50];

fib[0] = 0;
fib[1] = 1;

for (i = 2; i < 50; i++)
{
	fib[i] = fib[i - 1] + fib[i - 2];
}

printf("%d", fib[0]);

for (i = 1; i < 50; i++)
{
	printf(", %d", fib[i]);
}

printf("\n");

return (0);
}
