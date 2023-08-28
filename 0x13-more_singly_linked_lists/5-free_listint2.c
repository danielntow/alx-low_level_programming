#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - Frees a listint_t list and sets the head to NULL.
 * @head: Pointer to a pointer to the head node of the linked list.
 */
void free_listint2(listint_t **head)
{
	listint_t *current;
	listint_t *temp;

	if (head == NULL)
		return;

	current = *head;
	while (current != NULL)
	{
		temp = current;		 /* Store the current node */
		current = current->next; /* Move to the next node */
		free(temp);		 /* Free the current node */
	}

	*head = NULL; /* Set the head to NULL */
}

