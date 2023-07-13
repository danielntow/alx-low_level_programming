#include <stdio.h>
/**
 * main - calcutling the size of the various variables in bytee
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
printf("Size of a char: %zu byte(s)\n", size_t(char));
printf("Size of an int: %lu byte(s)\n", sizeof(int));
printf("Size of a long int: %lu byte(s)\n", sizeof(long int));
printf("Size of a long long int: %lu byte(s)\n", sizeof(long long int));
printf("Size of a float: %lu byte(s)\n", sizeof(float));
return (0);
}
