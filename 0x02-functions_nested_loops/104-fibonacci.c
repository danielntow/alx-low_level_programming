#include <stdio.h>

/**
* main - Entry point of the program
*
* Return: 0 upon successful execution
*/


void print_fibonacci(void);

int main(void)
{
print_fibonacci();

return 0;
}

void print_fibonacci(void)
{
unsigned int i;
unsigned int term1 = 1;
unsigned int term2 = 2;
unsigned int nextTerm;

printf("%u, %u", term1, term2);

for (i = 3; i <= 98; i++)
{
	nextTerm = term1 + term2;
	printf(", %u", nextTerm);

	term1 = term2;
	term2 = nextTerm;
}

printf("\n");
}

