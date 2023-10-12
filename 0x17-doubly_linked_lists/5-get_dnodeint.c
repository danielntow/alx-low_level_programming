#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

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
