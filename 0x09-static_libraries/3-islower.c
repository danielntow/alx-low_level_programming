#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int _islower(int c);
int main()
{
	int r;

	r = _islower('H');
	putchar(r + '0');
	r = _islower('o');
	putchar(r + '0');
	r = _islower(108);
	putchar(r + '0');
	putchar('\n');

	return 0;
}

int _islower(int c)
{
	char start_small_letter = 'a';
	char end_small_letter = 'z';
	char start_big_letter = 'A';
	char end_big_letter = 'Z';
	if (c >= start_small_letter && c <= end_small_letter)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
