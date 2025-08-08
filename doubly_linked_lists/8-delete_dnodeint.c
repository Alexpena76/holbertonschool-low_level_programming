#include <stdlib.h>
#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes the node at index of a doubly linked list
 * @head: Double pointer to the head of the doubly linked list
 * @index: Index of the node that should be deleted (starts at 0)
 *
 * Return: 1 if deletion succeeded, -1 if it failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current;
	unsigned int i;

	if (head == NULL || *head == NULL)
	{
		return (-1);
	}

	current = *head;
	i = 0;

	while (i < index && current != NULL)
	{
		current = current->next;
		i++;
	}

	if (current == NULL)
	{
		return (-1);
	}

	if (current->prev != NULL)
	{
		current->prev->next = current->next;
	}
	else
	{
		*head = current->next;
	}

	if (current->next != NULL)
	{
		current->next->prev = current->prev;
	}

	free(current);
	return (1);
}
