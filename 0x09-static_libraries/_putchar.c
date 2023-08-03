#include <unistd.h>
#include "main.h"

/**
 * _putchar - Writes a character to the standard output (stdout).
 * This function is used to print a single character to the console.
 *
 * @c: The character to be printed.
 *
 * Return: On success, the character written is returned.
 * On error, -1 is returned, and errno is set appropriately.
 */

int _putchar(char c)
{
    return (write(1, &c, 1));
}
