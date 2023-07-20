#include <stdio.h>

/**
 * print_most_numbers - Print numbers from 0 to 9 except 2 and 4.
 */
void print_most_numbers(void)
{
    int i;

    for (i = 0; i < 10; i++)
    {
        if (i == 2 || i == 4)
            continue;
        putchar(i + '0');
    }
    putchar('\n');
}
