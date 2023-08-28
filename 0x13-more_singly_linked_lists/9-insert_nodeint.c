#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - Inserts a new node at a given position in the
 * linked list.
 * @head: Pointer to a pointer to the head node of the linked list.
 * @idx: Index at which the new node should be inserted, starting at 0.
 * @n: Data to be stored in the new node.
 * Return: Address of the new node, or NULL if insertion failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *current;
	unsigned int count = 0;

	if (head == NULL)
		return (NULL);

	new_node =
	    malloc(sizeof(listint_t)); /* Allocate memory for the new node */
	if (new_node == NULL)
		return (NULL); /* Return NULL if memory allocation failed */

	new_node->n = n; /* Set the data of the new node */

	if (idx == 0)
	{
		new_node->next = *head; /* Insert at the beginning */
		*head = new_node;
		return (new_node);
	}

	current = *head;
	while (current != NULL)
	{
		if (count == idx - 1)
		{
			new_node->next =
			    current->next; /* Insert at the specified index */
			current->next = new_node;
			return (new_node);
		}
		current = current->next;
		count++;
	}

	free(new_node); /* Free the new node if insertion failed */
	return (NULL);
}

