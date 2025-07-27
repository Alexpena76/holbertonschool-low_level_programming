#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - Exe2cutes a function on each element on an array
 * @array: Pointer to the array of integers
 * @size: Number of elements in the array
 * @action: Pointer to the function to execute on each element
 *
 * Return: Void function
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL)
	{
		return;
	}

	if (action == NULL)
	{
		return;
	}

	if (size == 0)
	{
		return;
	}

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
