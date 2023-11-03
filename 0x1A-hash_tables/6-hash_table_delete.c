#include "hash_tables.h"
#include <stdlib.h>

/**
* hash_table_delete - Deletes a hash table
* @ht: The hash table to be deleted
*/
void hash_table_delete(hash_table_t *ht)
{
if (ht == NULL)
	return;

if (ht->array != NULL)
{
	unsigned long int i;
	hash_node_t *current, *temp;

	for (i = 0; i < ht->size; ++i)
	{
		current = ht->array[i];
		while (current != NULL)
		{
			temp = current;
			current = current->next;
			free(temp->key);
			free(temp->value);
			free(temp);
		}
	}
	free(ht->array);
}

free(ht);
}
