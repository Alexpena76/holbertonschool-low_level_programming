#include <stdlib.h>
#include "lists.h"

/**
 * free_dlistint - Frees a doubly linked list
 * @head: Pointer to the head of a doubly linked list
 *
 * Return: Void function
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *current;
	dlistint_t *next;

	if (head == NULL)
	{
		return;
	}

	current = head;

	while (current != NULL)
	{
		next = current->next;

		free(current);

		current = next;
	}
}
