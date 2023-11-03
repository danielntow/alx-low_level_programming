#include "hash_tables.h"
#include "shash_tables.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/* Function to create a sorted hash table */
shash_table_t *shash_table_create(unsigned long int size)
{
    shash_table_t *ht = malloc(sizeof(shash_table_t));
    if (ht == NULL)
        return (NULL);

    ht->size = size;
    ht->array = calloc(size, sizeof(shash_node_t *));
    ht->shead = NULL;
    ht->stail = NULL;

    return (ht);
}

/* Function to insert a key-value pair into the sorted hash table */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
    unsigned long int index = key_index((const unsigned char *)key, ht->size);
    shash_node_t *new_node = malloc(sizeof(shash_node_t));

    if (ht == NULL || key == NULL || *key == '\0')
        return (0);

    if (new_node == NULL)
        return (0);

    new_node->key = strdup(key);
    new_node->value = strdup(value);
    new_node->next = NULL;

    /* Insertion into the sorted linked list based on ASCII value */
    if (ht->shead == NULL)
    {
        ht->shead = new_node;
        ht->stail = new_node;
    }
    else
    {
        shash_node_t *current = ht->shead;
        shash_node_t *prev = NULL;

        while (current != NULL && strcmp(current->key, key) < 0)
        {
            prev = current;
            current = current->snext;
        }

        if (prev == NULL)
        {
            new_node->snext = ht->shead;
            ht->shead->sprev = new_node;
            ht->shead = new_node;
        }
        else if (current == NULL)
        {
            new_node->sprev = ht->stail;
            ht->stail->snext = new_node;
            ht->stail = new_node;
        }
        else
        {
            prev->snext = new_node;
            new_node->sprev = prev;
            new_node->snext = current;
            current->sprev = new_node;
        }
    }

    /* Insert into the hash table array */
    if (ht->array[index] == NULL)
        ht->array[index] = new_node;
    else
    {
        new_node->next = ht->array[index];
        ht->array[index] = new_node;
    }

    return (1);
}

/* Function to retrieve the value associated with a key in the sorted hash table */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
    shash_node_t *current = ht->shead;

    if (ht == NULL || key == NULL || *key == '\0')
        return (NULL);

    while (current != NULL)
    {
        if (strcmp(current->key, key) == 0)
            return (current->value);
        current = current->snext;
    }

    return (NULL);
}

/* Function to print the hash table in order using the sorted linked list */
void shash_table_print(const shash_table_t *ht)
{
    shash_node_t *current = ht->shead;

    if (ht == NULL)
        return;

    printf("{");
    while (current != NULL)
    {
        printf("'%s': '%s'", current->key, current->value);
        if (current->snext != NULL)
            printf(", ");
        current = current->snext;
    }
    printf("}\n");
}

/* Function to print the hash table key/value pairs in reverse order using the sorted linked list */
void shash_table_print_rev(const shash_table_t *ht)
{
    shash_node_t *current = ht->stail;

    if (ht == NULL)
        return;

    printf("{");
    while (current != NULL)
    {
        printf("'%s': '%s'", current->key, current->value);
        if (current->sprev != NULL)
            printf(", ");
        current = current->sprev;
    }
    printf("}\n");
}

/* Function to delete the sorted hash table */
