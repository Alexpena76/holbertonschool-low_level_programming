#include "dog.h"
#include <stdio.h>

/**
 * free_dog - Frees a dog structure
 * @d: Pointer to the dog structure to free
 *
 * Return: Void function
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
	{
		return;
	}

	if (d->name != NULL)
	{
		free(d->name);
	}

	if (d->owner != NULL)
	{
		free(d->owner);
	}

	free(d);
}
