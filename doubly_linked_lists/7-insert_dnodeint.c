#include <stdlib.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position
 * @h: Double pointer to the head of the doubly linked list
 * @idx: index where the new node should be inserted (starts at 0)
 * @n: Integer value to store in the new node
 *
 * Return: Address of the new node
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current;
	dlistint_t *new_node;
	unsigned int i;

	if (h == NULL)
	{
		return (NULL);
	}

	if (idx == 0)
	{
		return (add_dnodeint(h, n));
	}

	current = *h;
	i = 0;
	while (i < idx && current != NULL)
	{
		current = current->next;
		i++;
	}

	if (current == NULL)
	{
		if (i == idx)
		{
			return (add_dnodeint_end(h, n));
		}
		else
		{
			return (NULL);
		}
	}

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->next = current;
	new_node->prev = current->prev;

	if (current->prev != NULL)
	{
		current->prev->next = new_node;
	}

	current->prev = new_node;

	return (new_node);
}