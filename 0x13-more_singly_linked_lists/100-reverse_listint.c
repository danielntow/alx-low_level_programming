#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * reverse_listint - Reverses a listint_t linked list.
 * @head: Pointer to a pointer to the head node of the linked list.
 * Return: Pointer to the first node of the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL, *next;

	while (*head != NULL)
	{
		next = (*head)->next; /* Store the next node */
		(*head)->next = prev; /* Reverse the next pointer */

		prev = *head; /* Move prev and *head pointers */
		*head = next;
	}

	*head = prev; /* Update the head pointer to the new head */
	return (*head);
}
