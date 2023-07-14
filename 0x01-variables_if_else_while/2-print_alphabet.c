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
char start = 'a';
char end = 'z';
char ch;
for (ch = start; ch <= end; ch++)
{
	putchar(ch);
}

putchar('\n');
return (0);
}
