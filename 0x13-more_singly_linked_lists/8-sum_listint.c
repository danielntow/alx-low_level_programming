#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * sum_listint - Returns the sum of all the data (n) in a linked list.
 * @head: Pointer to the head node of the linked list.
 * Return: Sum of the data (n) in the linked list, or 0 if the list is empty.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *current = head;

	while (current != NULL)
	{
		sum += current->n; /* Add the current node's data to the sum */
		current = current->next;
	}

	return (sum);
}
