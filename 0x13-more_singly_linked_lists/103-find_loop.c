#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>



/**
 * find_listint_loop - Finds the node where the loop starts in a linked list.
 * @head: A pointer to the head of the linked list.
 * Return: The address of the node where the loop starts, or NULL if no loop.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow, *fast;

	slow = head;
	fast = head;

	while (fast != NULL && fast->next != NULL)
	{
		slow = slow->next;
		fast = fast->next->next;

		if (slow == fast) /* Loop detected */
		{
			slow = head; /* Move slow back to the head */

			/* Move both pointers at the same speed until they meet again */

			while (slow != fast)
			{
				slow = slow->next;
				fast = fast->next;
			}

			return (slow); /* Return the address of the loop start */
		}
	}

	return (NULL); /* No loop detected */
}

