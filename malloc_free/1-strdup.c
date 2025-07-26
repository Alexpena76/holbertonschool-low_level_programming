#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Creates a duplicate of a string
 * @str: String to be duplicated
 *
 * Return: Pointer to the duplicated string
 */

char *_strdup(char *str)
{
	int length = 0;
	int i = 0;
	char *copy;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[length] != '\0')
	{
		length++;
	}

	copy = malloc((length + 1) * sizeof(char));

	if (copy == NULL)
	{
		return (NULL);
	}

	for (i = 0; i <= length; i++)
	{
		copy[i] = str[i];
	}

	return (copy);
}
