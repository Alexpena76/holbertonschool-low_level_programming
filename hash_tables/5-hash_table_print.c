#include "hash_tables.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * hash_table_print - Prints a hash table
 * @ht: The hash table to print
 *
 * Return: Void function
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *current;
	int first_element = 1;

	if (ht == NULL)
	{
		return;
	}

	printf("{");

	first_element = 1;

	for (i = 0; i < ht->size; i++)
	{
		current = ht->array[i];

		while (current != NULL)
		{
			if (first_element == 0)
			{
				printf(", ");
			}

			printf("'%s': '%s'", current->key, current->value);

			first_element = 0;

			current = current->next;
		}
	}

	printf("}\n");
}
