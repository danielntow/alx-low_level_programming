#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * print_dlistint - Print all elements of a doubly linked list
 * @h: A pointer to the head of the list
 * Return: The number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
    dlistint_t const *current = h;
    size_t node_count = 0;

    if (h == NULL)
        return (node_count);

    while (current != NULL)
    {
        printf("%i\n", current->n);
        current = current->next;
        node_count++;
    }

    return (node_count);
}
