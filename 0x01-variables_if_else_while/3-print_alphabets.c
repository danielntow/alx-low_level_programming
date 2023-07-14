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
char lowercase = 'a';
char uppercase = 'A';

while (lowercase <= 'z')
{
	putchar(lowercase);
	lowercase++;
}

while (uppercase <= 'Z')
{
	putchar(uppercase);
	uppercase++;
}

putchar('\n');
return (0);
}
