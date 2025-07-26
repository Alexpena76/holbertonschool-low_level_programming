#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - Concatenates two strings
 * @s1: First string to concatenate (used entirely)
 * @s2: Second string to concatenate (limited to n bytes)
 *
 * Return: Pointer to newly allocated memory containing the concatenated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1 = 0;
	unsigned int len2 = 0;
	unsigned int bytes_to_copy = 0;
	unsigned int i = 0;
	unsigned int total_size = 0;
	char *result;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	while (s1[len1] != '\0')
	{
		len1++;
	}

	while (s2[len2] != '\0')
	{
		len2++;
	}

	if (n >= len2)
	{
		bytes_to_copy = len2;
	}
	else
		bytes_to_copy = n;

	total_size = len1 + bytes_to_copy + 1;

	result = malloc(total_size * sizeof(char));
	if (result == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len1; i++)
	{
		result[i] = s1[i];
	}

	for (i = 0; i < bytes_to_copy; i++)
	{
		result[len1 + i] = s2[i];
	}

	result[len1 + bytes_to_copy] = '\0';

	return (result);
}
