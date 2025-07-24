#include "main.h"

/**
 * _memcpy - Copies a set of values onto the first operand n times
 * @dest: Pointer to the memory area to be filled
 * @src: Array to be copied
 * @n: Amount of times the value will be copied
 *
 * Return: The new array
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
