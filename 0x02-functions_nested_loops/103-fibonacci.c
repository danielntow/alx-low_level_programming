#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: 0 upon successful execution
 */


int main(void)
{
int term1 = 1;
int term2 = 2;  
int nextTerm; 
long int sum = 2;

while (term2 <= 4000000)
{
	nextTerm = term1 + term2;

	if (nextTerm % 2 == 0)
	{
		sum += nextTerm;
	}

	term1 = term2;
	term2 = nextTerm;
}

printf("%ld\n", sum);

return (0);
}
