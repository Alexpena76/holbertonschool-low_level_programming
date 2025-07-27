#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Allocates memory for an array and initializes it to zero
 * @nmemb: Number of elements in the array
 * @size: Size in bytes of each element
 *
 * Return: Pointer to the allocated and zeroed memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int total_bytes;
	char *ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	total_bytes = nmemb * size;

	ptr = malloc(total_bytes);

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < total_bytes; i++)
	{
		ptr[i] = 0;
	}

	return (ptr);
}
