#include "main.h"

/**
 * _memset - Copies a value onto the first operand n times
 * @s: Pointer to the memory area to be filled
 * @b: Value to be copied
 * @n: Amount of times the value will be copied
 *
 * Return: The new array
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}

	return (s);
}
