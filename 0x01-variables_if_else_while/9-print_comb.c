#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - Entry point
*
* Description: This function prints a message using the puts function.
*
* Return: Always 0 (Success)
*/

int main(void)
{
int i = 0;
int j = 0;

while (i < 10)
{
	j = i + 1;
	while (j < 10)
	{
		putchar(i + '0');
		putchar(',');
		putchar(' ');
		putchar(j + '0');
		if (i != 8 || j != 9)
		{
			putchar(',');
			putchar(' ');
		}
		j++;
	}
	i++;
}
putchar('\n');
return (0);
}
