#include <stdio.h>

/**
* print_fibonacci - Prints the first 98 Fibonacci numbers
*                   separated by commas and followed by a newline.
*/
void print_fibonacci(void)
{
unsigned long long term1 = 1;
unsigned long long term2 = 2;
unsigned long long nextTerm;
unsigned int count;

printf("%llu, %llu", term1, term2);

for (count = 3; count <= 98; count++)
{
	nextTerm = term1 + term2;
	printf(", %llu", nextTerm);

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

