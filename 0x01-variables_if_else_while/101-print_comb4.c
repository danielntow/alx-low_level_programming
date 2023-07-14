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
int b = 1;
int c = 2;

while (a <= 7)
{
	while (b <= 8)
	{
		while (c <= 9)
		{
			if (a != b && b != c && a != c)
		{		
				putchar(a + '0');
				putchar(b + '0');
				putchar(c + '0');

				if (!(a == 7 && b == 8 && c == 9))
				{
					putchar(',');
					putchar(' ');
				}
			}
			c++;
		}
		b++;
		c = b + 1;
	}
	a++;
	b = a + 1;
	c = b + 1;
}

putchar('\n');

return (0);
}
