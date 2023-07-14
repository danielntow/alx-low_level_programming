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
char a = 0;
while (a < 10)
{
putchar(a);
a++;
}
putchar('\n');
return (0);
}
