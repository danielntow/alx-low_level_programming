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
while (a < 10) {
	putchar(a + '0');
	putchar(',');
	putchar(' ');
	a++;
}
putchar('\n');
return (0);
}
