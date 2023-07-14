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
char ch;

for (ch = 'a'; ch <= 'z'; ch++)
{
	if (ch == 'q' || ch == 'e')
	{
		continue;
	}

	putchar(ch);
}

putchar('\n');
return (0);
}
