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
	listint_t *newNode, *current;
	unsigned int count;

	count = 0;
	current = *head;

	if (*head == NULL)
		return (NULL);

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = NULL;

	if (idx == 0)
	{
		newNode->next = *head;
		*head = newNode;
		return (newNode);
	}

	while (current && count < idx - 1)
	{
		count++;
		current = current->next;
			}

	if (current == NULL)
	{
		free(newNode); /* Clean up the allocated memory */
		return (NULL);
	}

	newNode->next = current->next;
	current->next = newNode;

	return (newNode);
}
