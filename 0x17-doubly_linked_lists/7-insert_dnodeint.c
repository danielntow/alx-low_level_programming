#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
* insert_dnodeint_at_indexs - Insert a new node at a specific position
* @h: A pointer to a pointer to the head of the list
* @idx: The index where the new node should be added (starting from 0)
* @n: The value to assign to the new node
* Return: The address of the new node, or NULL if it failed
*/
dlistint_t *insert_dnodeint_at_indexs(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *new = malloc(sizeof(dlistint_t)), *t = *h;

if (!new)
return (NULL);
new->n = n;

if (!t && idx == 0)
return (*h = new);
for (; t && idx; --idx, t = t->next)
if (idx == 1 && t->next)
{
	new->next = t->next;
	t->next->prev = new;
	t->next = new;
	new->prev = t;
	return (new);
}
free(new);
return (NULL);
}

/**
* insert_dnodeint_at_index - Insert a new node at a specific position
* @h: A pointer to a pointer to the head of the list
* @idx: The index where the new node should be added (starting from 0)
* @n: The value to assign to the new node
* Return: The address of the new node, or NULL if it failed
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *newNode = malloc(sizeof(dlistint_t));
dlistint_t *current = *h;
unsigned int index = 0;

if (!newNode)
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
return (newNode);
}

while (current != NULL)
{
if (index == idx)
{
	newNode->prev = current->prev;
	newNode->next = current;
	if (current->prev != NULL)
		current->prev->next = newNode;
	current->prev = newNode;
	return (newNode);
}
current = current->next;
index++;
}
/* If the loop exits without inserting, free the newNode and return NULL */
free(newNode);
return (NULL);
}
