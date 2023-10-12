#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
* dlistint_len - Get the number of elements in a doubly linked list
* @h: A pointer to the head of the list
* Return: The number of elements
*/
size_t dlistint_len(const dlistint_t *h)
{
dlistint_t const *current = h;

size_t node_count = 0;

if (h == NULL)
return (0);

while (current != NULL)
{
current = current->next;
node_count++;
}

return (node_count);
}
