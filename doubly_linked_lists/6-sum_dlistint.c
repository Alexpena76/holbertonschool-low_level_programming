#include <stdlib.h>
#include "lists.h"

/**
 * sum_dlistint - Returns the sum of all the data (n) of a doubly linked list
 * @head: Pointer to the head of a doubly linked list
 *
 * Return: Sum of all data values in the list, or 0 if the list is empty
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current;
	int sum;

	if (head == NULL)
	{
		return (0);
	}

	current = head;
	sum = 0;

	while (current != NULL)
	{
		sum = sum + current->n;

		current = current->next;
	}

	return (sum);
}
