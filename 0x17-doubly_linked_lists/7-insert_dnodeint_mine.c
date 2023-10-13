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
