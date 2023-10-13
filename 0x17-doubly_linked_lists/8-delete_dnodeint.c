#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
* delete_dnodeint_at_indexs - Delete the node at a specific index
* @head: A pointer to a pointer to the head of the list
* @index: The index of the node to be deleted (starting from 0)
* Return: 1 if it succeeded, -1 if it failed
*/
int delete_dnodeint_at_indexs(dlistint_t **head, unsigned int index)
{
dlistint_t *current = *head;
dlistint_t *temp = NULL;
unsigned int i = 0;

if (*head == NULL)
return (-1);

if (index == 0)
{
*head = (*head)->next;
if (*head != NULL)
	(*head)->prev = NULL;
free(current);
return (1);
}

for (i = 0; current != NULL && i < index - 1; i++)
current = current->next;

if (current == NULL || current->next == NULL)
return (-1);

temp = current->next->next;
free(current->next);
current->next = temp;
if (temp != NULL)
temp->prev = current;

return (1);
}

#include "lists.h"

/**
* delete_dnodeint_at_index - Delete the node at a specific index
* @head: A pointer to a pointer to the head of the list
* @index: The index of the node to be deleted (starting from 0)
* Return: 1 if it succeeded, -1 if it failed
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
dlistint_t *current = *head;
unsigned int i = 0;

if (!current)
return (-1);

if (index == 0)
{
*head = current->next;
if (*head != NULL)
	(*head)->prev = NULL;
free(current);
return (1);
}

while (i < index && current->next)
{
current = current->next;
i++;
}

if (i == index)
{
if (current->prev)
	current->prev->next = current->next;
if (current->next)
	current->next->prev = current->prev;
free(current);
return (1);
}

return (-1); /* Index is out of bounds */
}
