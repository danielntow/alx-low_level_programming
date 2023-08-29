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
	const listint_t *tortoise = head, *hare = head;
	size_t count = 0;

	while (tortoise && hare && hare->next)
	{
		tortoise = tortoise->next;
		hare = hare->next->next;

		printf("[%p] %d\n", (void *)tortoise, tortoise->n);

		if (tortoise == hare)
		{
			printf("-> [%p] %d\n", (void *)tortoise, tortoise->n);
			exit(98);
		}

		count++;
	}

	return (count);
}
