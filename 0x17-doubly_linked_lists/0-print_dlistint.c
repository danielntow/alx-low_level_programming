#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

size_t print_dlistint(const dlistint_t *h)
{
    dlistint_t const *current = h;
    size_t count = 0;

    if (h == NULL)
        return (0);

    while (current != NULL)
    {
        printf("%i\n", current->n);
        current = current->next;
        count++;
    }

    return (count);
}
