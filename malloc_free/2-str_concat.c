#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Concatenates two strings
 * @s1: First string to concatenate
 * @s2: Second string to concatenate
 *
 * Return: Pointer to newly allocated concatenated string
 */

char *str_concat(char *s1, char *s2)
{
	int len1 = 0;
	int len2 = 0;
	int total_length = 0;
	int i = 0;
	int j = 0;
	char *result;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[len1] != '\0')
		len1++;

	while (s2[len2] != '\0')
		len2++;
	total_length = len1 + len2 + 1;
	result = malloc(total_length * sizeof(char));
	if (result == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
		result[i] = s1[i];
	for (j = 0; j < len2; j++)
		result[i + j] = s2[j];
	result[len1 + len2] = '\0';
	return (result);
}
