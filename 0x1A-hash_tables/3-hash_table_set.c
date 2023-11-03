#include "hash_tables.h"

/**
* hash_table_set - Adds an element to the hash table
* @ht: The hash table to add/update the key/value pair
* @key: The key (cannot be an empty string)
* @value: The value associated with the key (can be an empty string)
*
* Return: 1 if successful, 0 otherwise
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
unsigned long int index;
hash_node_t *new_node = NULL, *temp = NULL;

/* Check for empty key */
if (key == NULL || *key == '\0' || ht == NULL)
	return (0);

/* Obtain the index where the element should be stored */
index = key_index((const unsigned char *)key, ht->size);

/* Check if the key already exists at this index */
temp = ht->array[index];
while (temp)
{
	if (strcmp(temp->key, key) == 0)
	{
		/* Key found, update its value */
		free(temp->value);
		temp->value = strdup(value);
		if (temp->value == NULL)
			return (0);
		return (1);
	}
	temp = temp->next;
}

/* Key not found, create a new node and add it to the list */
new_node = malloc(sizeof(hash_node_t));
if (new_node == NULL)
	return (0);

new_node->key = strdup(key);
if (new_node->key == NULL)
{
	free(new_node);
	return (0);
}

new_node->value = strdup(value);
if (new_node->value == NULL)
{
	free(new_node->key);
	free(new_node);
	return (0);
}

new_node->next = ht->array[index];
ht->array[index] = new_node;

return (1);
}
