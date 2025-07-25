#include "main.h"

/**
 * _strstr - Locates a substring
 * @haystack: Full string
 * @needle: Substring
 *
 * Return: The substring that matches
 */

char *_strstr(char *haystack, char *needle)
{
	int i = 0;
	int j = 0;

	if (needle[0] == '\0')
	{
		return (haystack);
	}

	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (haystack[i] == needle[0])
		{
			j = 0;
		}

		while (needle[j] != '\0' && haystack[i + j] != '\0')
		{
			if (haystack[i + j] != needle[j])
			{
				break;
			}
			j++;
		}
		if (needle[j] == '\0')
		{
			return (&haystack[i]);
		}
	}
	return ('\0');
}
