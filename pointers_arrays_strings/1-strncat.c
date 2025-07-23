#include "main.h"

/**
 * _strncat - Concatenates two strings
 * @dest: First operand
 * @src: Second operand
 * @n: Size
 *
 * Return: The concatenation of the two strings
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;
	int count = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (count < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
		count++;
	}
	dest[i] = '\0';

	return (dest);
}
