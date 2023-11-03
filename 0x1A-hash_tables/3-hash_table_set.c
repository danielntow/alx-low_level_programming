#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>

/**
* create_node - Creates a new node for the hash table
* @key: The key to add
* @value: The value associated with the key
*
* Return: A pointer to the newly created node, NULL on failure
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
* update_value - Updates the value for an existing key
* @node: The node to update the value for
* @value: The new value to set
*
* Return: 1 if successful, 0 on failure
*/
int update_value(hash_node_t *node, const char *value)
{
char *new_value = strdup(value);
if (new_value == NULL)
	return (0);

free(node->value);
node->value = new_value;
return (1);
}

/**
* add_node - Adds a node to the hash table
* @ht: The hash table to add the node
* @index: The index where the node should be added
* @new_node: The node to add
*
* Return: 1 if successful, 0 on failure
*/
int add_node(hash_table_t *ht, unsigned long int index, hash_node_t *new_node)
{
new_node->next = ht->array[index];
ht->array[index] = new_node;
return (1);
}

/**
* free_node - Frees memory allocated for a node
* @node: The node to free
*/
void free_node(hash_node_t *node)
{
if (node != NULL)
{
	free(node->key);
	free(node->value);
	free(node);
}
}

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
hash_node_t *current = NULL;
/* Create a new node and add it to the hash table */
hash_node_t *new_node = create_node(key, value);

if (ht == NULL || key == NULL || *key == '\0')
	return (0);

index = key_index((const unsigned char *)key, ht->size);
current = ht->array[index];

/* Check for collision and update value if key already exists */
while (current != NULL)
{
	if (strcmp(current->key, key) == 0)
	{
		return (update_value(current, value));
	}
	current = current->next;
}

/* Create a new node and add it to the hash table */
if (new_node == NULL)
	return (0);

return (add_node(ht, index, new_node));
}
