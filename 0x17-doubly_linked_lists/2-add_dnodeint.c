#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
    dlistint_t *newNode = create_dlistint_node(n);

    if (*head == NULL)
        *head = newNode;

    (*head)->next = newNode;
    newNode->next = (*head)->next;
    newNode->prev = *head;
    if ((*head)->next != NULL)
        (*head)->next->prev = newNode;

    return (*head);
}
