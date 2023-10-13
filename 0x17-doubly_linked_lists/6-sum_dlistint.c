#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * sum_dlistint - Compute the sum of all the data (n) in a dlistint_t list
 * @head: A pointer to the head of the list
 * Return: The sum of all the data, or 0 if the list is empty
 */
int sum_dlistint(dlistint_t *head)
{
int sum = 0;

if (head == NULL)
return (0);

while (head != NULL)
{
sum += head->n;
head = head->next;
}

return (sum);
}
