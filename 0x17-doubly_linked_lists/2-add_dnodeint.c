#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

dlistint_t *create_dlistint_node(int n)
{
    dlistint_t *newNode = (dlistint_t *)malloc(sizeof(dlistint_t));

    if (newNode == NULL)
    {
        return (NULL);
    }

    newNode->n = n;
    newNode->prev = NULL;
    newNode->next = NULL;

    return (newNode);
}

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
    dlistint_t *newNode = create_dlistint_node(n);

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
