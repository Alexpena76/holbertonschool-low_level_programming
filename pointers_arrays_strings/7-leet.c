#include "main.h"

/**
 * leet - Replace certain characters for others in a string
 * @s: String to be checked
 *
 * Return: New string
 */

char *leet(char *s)
{
	char letters[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};

	char replacements[] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};

	int i = 0;

	int j = 0;

	while (s[i] != '\0')
	{
		j = 0;

		while (j < 10)
		{
			if (s[i] == letters[j])
			{
				s[i] = replacements[j];
			}
			j++;
		}
		i++;
	}

	return (s);

}
