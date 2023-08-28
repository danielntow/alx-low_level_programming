#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * add_nodeint - Adds a new node at the beginning of a listint_t list.
 * @head: Pointer to a pointer to the head node of the linked list.
 * @n: Value to be assigned to the new node.
 * Return: Address of the new element, or NULL if it failed.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	/* Allocate memory for the new node */
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		perror("Memory allocation failed");
		return (NULL); /* Return NULL if memory allocation fails */
	}

	/* Initialize the new node's values */
	new_node->n = n;
	new_node->next =
	    *head; /* Set the new node's next pointer to the current head */

	*head = new_node; /* Update the head pointer to the new node */

	return (new_node); /* Return the address of the new node */
}
