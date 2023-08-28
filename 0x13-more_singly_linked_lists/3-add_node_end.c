#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * add_nodeint_end - Adds a new node at the end of a listint_t list.
 * @head: Pointer to a pointer to the head node of the linked list.
 * @n: Value to be assigned to the new node.
 * Return: Address of the new element, or NULL if it failed.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *current;

	/* Allocate memory for the new node */
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		return (NULL); /* Return NULL if memory allocation fails */
	}

	/* Initialize the new node's values */
	new_node->n = n;
	new_node->next =
	    NULL; /* The new node will be the last node, so next is NULL */

	/* If the list is empty, set the new node as the head */
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	/* Traverse to the last node in the list */
	current = *head;
	while (current->next != NULL)
	{
		current = current->next;
	}

	/* Append the new node to the end of the list */
	current->next = new_node;

	return (new_node); /* Return the address of the new node */
}
