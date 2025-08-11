#include "hash_tables.h"
#include <stdlib.h>

/**
 * hash_table_delete - Deletes a hash table
 * @ht: The hash table to delete
 *
 * Return: Void function
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *current, *next_node;
	unsigned long int i;

	if (ht == NULL)
	{
		return;
	}

	for (i = 0; i < ht->size; i++)
	{
		current = ht->array[i];

		while (current != NULL)
		{
			next_node = current->next;

			free(current->key);
			free(current->value);

			free(current);

			current = next_node;
		}
	}

	free(ht->array);

	free(ht);
}
