#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - Deletes the node at a given index in a linkedlist.
 * @head: Pointer to a pointer to the head node of the linked list.
 * @index: Index of the node to be deleted, starting at 0.
 * Return: 1 if deletion succeeded, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *node;
	unsigned int count = 0;

	if (head == NULL || *head == NULL)
		return (-1); /* Return -1 if the list is empty or head is NULL */

	current = *head;

	if (index == 0)
	{
		*head = (*head)->next; /* Delete the node at the beginning */
		free(current);
		return (1);
	}

	while (current)
	{
		if (count == index - 1)
		{
			node = current->next; /* Store the node to be deleted */
			if (node == NULL)
				return (-1); /* Return -1 if deletion is not possible */
			current->next = node->next; /* Delete the node */
			free(node);
			return (1);
		}
		current = current->next;
		count++;
	}

	return (-1); /* Return -1 if the index is out of bounds */
}

