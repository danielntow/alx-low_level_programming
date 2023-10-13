#include <stdio.h>
#include <string.h>
#include <stdint.h>

/**
 * main - Entry point for the program.
 *
 * @argc: The number of arguments passed to the program.
 * @argv: An array of strings containing the program's arguments.
 *
 * Return: Always returns 0 (success).
 */
int main(int argc, char *argv[])
{
char *username = argv[1];
uint32_t key = 0;

int i;

if (argc != 2)
{
printf("Usage: %s <username>\n", argv[0]);
return (1);
}

for (i = 0; username[i] != '\0'; i++)
{
key += username[i];
}

printf("Valid key for username %s: %u\n", username, key);
return (0);
}
