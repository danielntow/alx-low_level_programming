#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>

/**
* create_node - Creates a new node for the hash table
* @key: The key for the new node
* @value: The value for the new node
*
* Returns: The new node created or NULL on failure
*/
hash_node_t *create_node(const char *key, const char *value)
{
hash_node_t *new_node = malloc(sizeof(hash_node_t));

if (new_node == NULL)
	return (NULL);

new_node->key = strdup(key);
if (new_node->key == NULL)
{
	free(new_node);
	return (NULL);
}

new_node->value = strdup(value);
if (new_node->value == NULL)
{
	free(new_node->key);
	free(new_node);
	return (NULL);
}

new_node->next = NULL;

return (new_node);
}

/**
* hash_table_set - Adds an element to the hash table
* @ht: The hash table to add/update the key/value
* @key: The key (cannot be an empty string)
* @value: The value associated with the key (duplicated, can be an empty string)
*
* Returns: 1 if succeeded, 0 otherwise
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
unsigned long int index;
hash_node_t *new_node = NULL;
hash_node_t *current = NULL;

if (ht == NULL || key == NULL || *key == '\0')
	return (0);

index = key_index((const unsigned char *)key, ht->size);
current = ht->array[index];

/* Check for collision and update value if key already exists */
while (current != NULL)
{
	if (strcmp(current->key, key) == 0)
	{
		free(current->value);
		current->value = strdup(value);
		if (current->value == NULL)
			return (0);
		return (1);
	}
	current = current->next;
}

/* Create a new node */
new_node = create_node(key, value);
if (new_node == NULL)
	return (0);

/* Handle collision by adding the new node at the beginning of the list */
new_node->next = ht->array[index];
ht->array[index] = new_node;

return (1);
}
