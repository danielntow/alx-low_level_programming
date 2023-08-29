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
	const listint_t *slow, *fast; /* Declare two pointers: slow and fast */
	size_t count = 0;	      /* Initialize a counter for counting nodes */

	slow = head; /* Initialize slow pointer to the head of the list */
	fast = head; /* Initialize fast pointer to the head of the list */

	while (fast != NULL && fast->next != NULL)
	{
		/* Print the current node's address and data, then increment the count */
		printf("[%p] %d\n", (void *)slow, slow->n);
		count++;

		/* Move slow pointer by one step and fast pointer by two steps */
		slow = slow->next;
		fast = fast->next->next;

		/* Check if there's a loop by comparing slow and fast pointers */
		if (slow == fast)
		{
			/* Print the address and data of the node where the loop is detected */
			printf("-> [%p] %d\n", (void *)slow, slow->n);
			break; /* Exit the loop since a loop is detected */
		}
	}
	/* If there's no loop, print the remaining nodes and update the count */
	if (fast == NULL || fast->next == NULL)
	{
		while (slow != NULL)
		{
			/* Print the current node's address and data, then increment the count */
			printf("[%p] %d\n", (void *)slow, slow->n);
			count++;
			slow = slow->next; /* Move slow pointer to the next node */
		}
	}
	/* Return the total count of nodes in the list */
	return (count);
}


