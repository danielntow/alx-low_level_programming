#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list - Prints all the elements of a list_t list.
 * @h: Pointer to the head of the list.
 *
 * Return: Number of nodes in the list.
 */

size_t print_list(const list_t *h)
{
	int num_nodes = 0;

	while (h != NULL)
	{
		printf("[%d] ", h->len);
		if (h->str == NULL)
			printf("(nil) ");
		else
			printf("%s", h->str);
		printf("\n");
		num_nodes++;
		h = h->next;
	}

	return (num_nodes);
}

