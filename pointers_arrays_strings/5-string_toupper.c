#include "main.h"

/**
 * string_toupper - Converts all characters from a string to uppercase
 * @s: The string to be checked
 *
 * Return: The string but in uppercase
 */

char *string_toupper(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] - ('a' - 'A');
		}
		i++;
	}

	return (s);
}
