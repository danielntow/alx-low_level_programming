#include "hash_tables.h"

/**
* hash_table_get - Retrieves a value associated with a key in the hash table
* @ht: The hash table to look into
* @key: The key to search for
*
* Return: The value associated with the element, or NULL not found
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
unsigned long int index;
hash_node_t *current = NULL;

if (ht == NULL || key == NULL || *key == '\0')
	return (NULL);

index = key_index((const unsigned char *)key, ht->size);
current = ht->array[index];

/* Look for the key in the list at the given index */
while (current != NULL)
{
	if (strcmp(current->key, key) == 0)
	{
		/* Return the value associated with the key */
		return (current->value);
	}
	current = current->next;
}

/* Key not found */
return (NULL);
}
