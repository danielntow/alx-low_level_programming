#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint_safe - Prints a listint_t linked list.
 * @head: Pointer to the head node of the linked list.
 * Return: The number of nodes in the linked list.
 */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *current = head;
	size_t count = 0;

	while (current)
	{
		printf("[%p] %d\n", (void *)current, current->n);

		if (current <= current->next)
		{
			printf("-> [%p] %d\n", (void *)current->next,
			       current->next->n);
			break;
		}

		current = current->next;
		count++;
	}

	return (count);
}
