#include "main.h"
#include <stdlib.h>

/**
 * create_array - Creates an array of chars and initializes it with a char
 * @size: Size of the array to create
 * @c: Character to initialize all elements with
 *
 * Return: Pointer to the array, or NULL if size is 0 or allocation fails
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *array = 0;

	if (size == 0)
	{
		return (NULL);
	}

	array = malloc(size * sizeof(char));

	if (array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}

	return (array);

}
