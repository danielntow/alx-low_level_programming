#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
* add_dnodeint_end - Add a new node at the end of a doubly linked list
* @head: A pointer to a pointer to the head of the list
* @n: The value to add to the new node
* Return: The address of the new element, or NULL if it failed
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *newNode = (dlistint_t *)malloc(sizeof(dlistint_t));

dlistint_t *current = *head;

if (newNode == NULL)
{
return (NULL);
}

newNode->n = n;
newNode->next = NULL;

if (*head == NULL)
{
*head = newNode;
newNode->prev = NULL;
return (*head);
}

while (current->next != NULL)
{
current = current->next;
}

current->next = newNode;
newNode->prev = current;

return (*head);
}

