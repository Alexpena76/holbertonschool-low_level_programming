#include "main.h"

/**
 * _strcat - Concatenates two strings
 * @dest: String which will have the concatenation
 * @src: String to be copied to the first operand
 *
 * Return: The concatenation of the two strings
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';

	return (dest);
}
