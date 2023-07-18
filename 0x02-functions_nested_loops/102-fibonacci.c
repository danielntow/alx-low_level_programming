#include "main.h"

/**
* print_fibonacci - Prints the first 50 Fibonacci numbers
*/
void print_fibonacci(void)
{
int i;
unsigned int fib1 = 1, fib2 = 2, fib;

_putchar('1');
_putchar(',');
_putchar(' ');
_putchar('2');

for (i = 3; i <= 50; i++)
{
	fib = fib1 + fib2;

	_putchar(',');
	_putchar(' ');

	print_number(fib);

	fib1 = fib2;
	fib2 = fib;
}

_putchar('\n');
}

/**
* print_number - Prints a number using _putchar
* @n: The number to be printed
*/
void print_number(unsigned int n)
{
if (n / 10)
	print_number(n / 10);

_putchar((n % 10) + '0');
}

