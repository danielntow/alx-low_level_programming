#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main - Entry point
*
* Description: This function prints a message using the puts function.
*
* Return: Always 0 (Success)
*/

int main(void)
{
int a = 0;
int b = 0;

while (a < 10)
{
	b = a + 1;
	while (b < 10)
	{
		putchar(a + '0');
		putchar(b + '0');
		if (a != 8 || b != 9)
		{
			putchar(',');
			putchar(' ');
		}
		b++;
	}
	a++;
}
putchar('\n');return (0);
}
