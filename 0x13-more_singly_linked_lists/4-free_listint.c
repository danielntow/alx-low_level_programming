#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * free_listint - Frees a listint_t list.
 * @head: Pointer to the head node of the linked list.
 */
void free_listint(listint_t *head)
{
	listint_t *current;

	while (head != NULL)
	{
		current = head;	   /* Store the current node */
		head = head->next; /* Move to the next node */
		free(current);	   /* Free the current node */
	}
}

