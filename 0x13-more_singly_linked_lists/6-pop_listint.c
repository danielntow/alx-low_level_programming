#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * pop_listint - Deletes the head node of a listint_t linked list.
 * @head: Pointer to a pointer to the head node of the linked list.
 * Return: The data (n) of the deleted head node, or 0 if the list is empty.
 */
int pop_listint(listint_t **head)
{
	int data;
	listint_t *temp;

	if (head == NULL || *head == NULL)
		return (0); /* Return 0 if the list is empty */

	temp = *head;	    /* Store the current head node */
	data = temp->n;	    /* Store the data of the head node */
	*head = temp->next; /* Update the head pointer to the next node */
	free(temp);	    /* Free the old head node */

	return (data); /* Return the data of the deleted head node */
}

