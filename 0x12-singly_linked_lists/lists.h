#ifndef LIST_H
#define LIST_H

#include <stddef.h>

/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * for Holberton project
 */

typedef struct list_s
{
    char *str;
    unsigned int len;
    struct list_s *next;

} list_t;

/* Function to print all elements of a list */
size_t print_list(const list_t *h);

/* Function to get the number of elements in a list */
size_t list_len(const list_t *h);

/* Function to add a new node at the beginning of a list */
list_t *add_node(list_t **head, const char *str);

#endif /* LIST_H */

