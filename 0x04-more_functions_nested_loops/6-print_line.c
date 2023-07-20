#include <stdio.h>


/**
 * print_line - Draw a straight line in the terminal.
 *
 * @n: The number of times the character '_' should be printed.
 */
void print_line(int n)
{
    if (n <= 0)
    {
        putchar('\n');
        return;
    }

    while (n > 0)
    {
        putchar('_');
        n--;
    }
    putchar('\n');
}

