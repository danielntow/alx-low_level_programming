#include <stdio.h>
#include "main.h"

/**
 * print_most_numbers - check the code
 *
 * Return: Always 0.
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
