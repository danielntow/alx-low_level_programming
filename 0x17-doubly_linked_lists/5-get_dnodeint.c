#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
* get_dnodeint_at_index - Get the nth node of a dlistint_t list
* @head: A pointer to the head of the list
* @index: The index of the node to retrieve, starting from 0
* Return: A pointer to the nth node, or NULL if it does not exist
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
dlistint_t *current = head;
unsigned int position = 0;

if (head == NULL)
return (NULL);

while (current != NULL && position < index)
{
current = current->next;
position++;
}

return (current);
}
