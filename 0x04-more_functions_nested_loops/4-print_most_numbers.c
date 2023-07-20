#include <stdio.h>

/**
 * print_most_numbers - prints numbers from 0-9 but skips 4 and 5
 */

void print_most_numbers(void)
{
    int i;

    for (i = 0; i < 10; i++)
    {
        if (i == 4 || i == 5)
            continue;
        putchar(i + '0');
    }
    putchar('\n');
}