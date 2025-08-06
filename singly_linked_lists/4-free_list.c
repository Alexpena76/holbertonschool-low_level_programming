#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees a list_t list
 * @head: Pointer to the head of a list
 *
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *next_node;

	if (head == NULL)
	{
		return;
	}

	while (head != NULL)
	{
		next_node = head->next;

		if (head->str != NULL)
		{
			free(head->str);
		}

		free(head);

		head = next_node;
	}


}
