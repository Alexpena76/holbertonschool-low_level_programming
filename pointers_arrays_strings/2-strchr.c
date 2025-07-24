#include "main.h"

/**
 * _strchr - Returns a value if it contains a passed character
 * @s: String
 * @c: Character to be looked for
 *
 * Return: The result of the character it contains or null
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
		i++;
	}

	if (c == '\0')
	{
		return (&s[i]);
	}

	return ('\0');
}
