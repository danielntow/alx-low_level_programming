#include <stdio.h>
#include "main.h"
#include "_putchar.c"
/**
 *print_alphabet-function begins
 *
 *Return:function ends
 */
void print_alphabet(void)
{
	char alp[28] = "abcdefghijklmnopqrstuvwxyz\n";
	int i = 0;

	while (i < 27)
	{
		putchar(alp[i]);
		i++;
	}
}
