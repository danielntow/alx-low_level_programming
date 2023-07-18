#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 0
 */

int main(void)
{
int i;
unsigned int a = 1;
unsigned int b = 2;
unsigned int c;

printf("%u, %u", a, b);

for (i = 3; i <= 98; i++)
{
	c = a + b;
	printf(", %u", c);
	a = b;
	b = c;
}

printf("\n");

return (0);
}

