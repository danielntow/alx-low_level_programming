#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * get_nodeint_at_index - Returns the nth node of a listint_t linked list.
 * @head: Pointer to the head node of the linked list.
 * @index: Index of the node to retrieve, starting at 0.
 * Return: Pointer to the nth node, or NULL if the node does not exist.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current;

	unsigned int count;

	count = 0;

	current = head;

	if (head == NULL)
		return (NULL);

	while (current && count <= index)
	{
		/*printf("count is %zu/n and index is %d is [ %d ]\n", count, */
		/* index, current->n); */
		if (count == index)
		{
			return (current);
		}
		else
		{
			current = current->next;
			count++;
		}
	}
	return (NULL);
}

