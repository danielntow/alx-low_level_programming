#include <stdio.h>

/**
* print_fibonacci - Prints the first 98 Fibonacci numbers
*                   separated by commas and followed by a newline.
*/
void print_fibonacci(void)
{
unsigned long term1 = 1;
unsigned long term2 = 2;
unsigned long nextTerm;
unsigned int count;

printf("%lu, %lu", term1, term2);

for (count = 3; count <= 98; count++)
{
	nextTerm = term1 + term2;
	printf(", %lu", nextTerm);

	term1 = term2;
	term2 = nextTerm;
}

printf("\n");
}

/**
* main - Entry point of the program
*
* Return: Always 0
*/
int main(void)
{
print_fibonacci();
return (0);
}

