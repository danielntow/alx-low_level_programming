#include "search_algos.h"

/**
 * linear_skip - search for a value in a sorted skip list
 * @list: pointer to the head of the skip list
 * @value: value to search for
 * Return: pointer to the first node where value is located, or NULL if not found
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
    skiplist_t *st = list;
    skiplist_t *end = NULL;

    if (!list)
        return (NULL);

    while (st->express)
    {
        end = st->express;
        printf("Value checked at index [%lu] = [%d]\n", end->index, end->n);
        if (end->n >= value)
        {
            printf("Value found between indexes [%lu] and [%lu]\n", st->index, end->index);
            break;
        }
        st = end;
    }

    if (!end)
    {
        while (st->next)
            st = st->next;
        printf("Value found between indexes [%lu] and [%lu]\n", st->index, st->index);
    }

    while (st && st->index <= end->index)
    {
        printf("Value checked at index [%lu] = [%d]\n", st->index, st->n);
        if (st->n == value)
            return (st);
        st = st->next;
    }

    return (NULL);
}
