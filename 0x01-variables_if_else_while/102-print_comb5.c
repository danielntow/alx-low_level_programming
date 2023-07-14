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
int i = 0;
int j = 0;

while (i <= 99) {
	j = i + 1;
	while (j <= 99) {
		putchar(i / 10 + '0');
		putchar(i % 10 + '0');
		putchar(' ');
		putchar(j / 10 + '0');
		putchar(j % 10 + '0');
		if (i != 98 || j != 99) {
			putchar(',');
			putchar(' ');
		}
		j++;
	}
	i++;
}return (0);
}
