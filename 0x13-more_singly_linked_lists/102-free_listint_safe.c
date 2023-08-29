#include "lists.h"
#include <stdlib.h>

/**
 * free_listint_safe - Frees a linked list safely, even with loops.
 * @h: A pointer to a pointer to the head of the linked list.
 * Return: The size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *current = *h;
	listint_t *next;
	size_t size = 0;

	while (current != NULL)
	{
		size++;
		next = current->next;
		free(current);
		current = next;

		/* Break the loop if we've already visited this node */
		if (current == *h)
		{
			*h = NULL; /* Set head to NULL to prevent any accidental use */
			break;
		}
	}

	return (size);
}

