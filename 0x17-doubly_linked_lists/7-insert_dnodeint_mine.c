#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - Insert a new node at a specific position in a dlistint_t list
 * @h: A pointer to a pointer to the head of the list
 * @idx: The index where the new node should be added (starting from 0)
 * @n: The value to assign to the new node
 * Return: The address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newNode = (dlistint_t *)malloc(sizeof(dlistint_t));
	dlistint_t *current = *h;
	unsigned int index = 0;

	if (newNode == NULL)
	{
		perror("Memory allocation failure");
		return (NULL);
	}

	newNode->n = n;
	newNode->next = NULL;
	newNode->prev = NULL;

	if (idx == 0)
	{
		newNode->next = *h;
		if (*h != NULL)
			(*h)->prev = newNode;
		*h = newNode;
		return newNode;
	}

	while (current != NULL && index < idx)
	{
		current = current->next;
		index++;
	}

	if (index < idx)
	{
		free(newNode);
		return (NULL);
	}

	newNode->prev = current->prev;
	newNode->next = current;

	if (current->prev != NULL)
		current->prev->next = newNode;

	current->prev = newNode;

	return newNode;
}

#include <stdio.h>
#include <stdlib.h>

/* Doubly linked list node structure */
typedef struct dlistint_t
{
	int n;
	struct dlistint_t *prev;
	struct dlistint_t *next;
} dlistint_t;

/* Function to insert a new node at a given position */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
	{
		perror("Memory allocation failed");
		return NULL;
	}
	newNode->n = n;
	newNode->prev = NULL;
	newNode->next = NULL;

	if (idx == 0)
	{
		/* Insert at the beginning */
		newNode->next = *h;
		if (*h != NULL)
		{
			(*h)->prev = newNode;
		}
		*h = newNode;
		return newNode;
	}

	dlistint_t *current = *h;
	for (unsigned int i = 0; i < idx - 1 && current != NULL; i++)
	{
		current = current->next;
	}

	if (current == NULL)
	{
		free(newNode);
		return NULL; // Index is out of bounds
	}

	newNode->next = current->next;
	newNode->prev = current;
	if (current->next != NULL)
	{
		current->next->prev = newNode;
	}
	current->next = newNode;

	return newNode;
}

/* Function to print the doubly linked list for testing */
void printDoublyList(dlistint_t *head)
{
	while (head != NULL)
	{
		printf("%d -> ", head->n);
		head = head->next;
	}
	printf("NULL\n");
}

int main()
{
	dlistint_t *head = NULL;

	insert_dnodeint_at_index(&head, 0, 10); // Insert at the beginning
	insert_dnodeint_at_index(&head, 1, 20); // Insert at index 1
	insert_dnodeint_at_index(&head, 0, 5);	// Insert at the beginning
	insert_dnodeint_at_index(&head, 2, 15); // Insert at index 2

	printDoublyList(head);

	return 0;
}

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *temp = *h;
	unsigned int i = 0;

	if (h == NULL)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = *h;
		new_node->prev = NULL;
		if (*h != NULL)
			(*h)->prev = new_node;
		*h = new_node;
		return (new_node);
	}

	while (temp != NULL && i < idx - 1)
	{
		temp = temp->next;
		i++;
	}

	if (temp == NULL)
		return (NULL);

	new_node->next = temp->next;
	new_node->prev = temp;
	if (temp->next != NULL)
		temp->next->prev = new_node;
	temp->next = new_node;

	return (new_node);
}
