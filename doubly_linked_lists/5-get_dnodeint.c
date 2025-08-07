#include <stdlib.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - Returns the nth node of a doubly linked list
 * @head: Pointer to the head of the doubly linked list
 * @index: Index of the node to retrieve, starting from 0
 *
 * Return: Pointer to the node at the specified index
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current;
	unsigned int i;


	if (head == NULL)
	{
		return (NULL);
	}

	current = head;
	i = 0;

	while (i < index && current != NULL)
	{
		current = current->next;
		i++;
	}

	return (current);

}
