#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 0
 */

int main(void)
{
unsigned int i;
unsigned long a = 1;
unsigned long b = 2;
unsigned long c;

printf("%lu, %lu", a, b);

for (i = 3; i <= 98; i++)
{
	c = a + b;
	printf(", %lu", c);
	a = b;
	b = c;
}

printf("\n");

return (0);
}
