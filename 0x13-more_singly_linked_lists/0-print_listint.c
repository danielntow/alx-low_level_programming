#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/**
 * print_listint - Prints all the elements of a listint_t list.
 * @h: Pointer to the head of the list.
 * Return: The number of nodes in the list.
 */
size_t print_listint(const listint_t *h)
{

	const listint_t *current = h;
	size_t count = 0;
	int num;

	while (current)
	{
		num = current->n;

		/* Handle the case of -ve numbers */
		if (num < 0)
		{
			putchar('-');
			num = -num;
		}
		/* Print the number */
		print_number(num);
		/* Print a newline after each number */
		putchar('\n');

		current = current->next;
		count++;
	}
	return (count);
}

/**
 * print_number - Prints a number using putchar.
 * @n: The number to be printed.
 */
void print_number(int n)
{
	if (n / 10 != 0)
		print_number(n / 10);

	putchar(n % 10 + '0');
}
