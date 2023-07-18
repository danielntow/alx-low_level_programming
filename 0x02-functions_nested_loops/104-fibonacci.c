#include <stdio.h>

/**
* main - Entry point of the program
*
* Return: 0 upon successful execution
*/


int main(void)
{
int current = 1;
int previous = 2;
int next;

printf("%d, %d, ", current, previous);

for (int i = 3; i <= 98; i++) {
next = current + previous;
printf("%d, ", next);
current = previous;
previous = next;
}

printf("\n");

return (0);
}
