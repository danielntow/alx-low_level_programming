#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
* add_dnodeint - Add a new node at the beginning of a doubly linked list
* @head: A pointer to a pointer to the head of the list
* @n: The value to add to the new node
* Return: The address of the new element, or NULL if it failed
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *newNode = (dlistint_t *)malloc(sizeof(dlistint_t));

if (newNode == NULL)
{
return (NULL);
}

newNode->n = n;
newNode->next = NULL;

if (*head == NULL)
{
*head = newNode;
}
else
{
newNode->next = *head;
(*head)->prev = newNode;
*head = newNode;
}

return (*head);

}
