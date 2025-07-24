#include "main.h"

/**
 * _strspn - Counts the letters associated with accept
 * @s: String
 * @accept: letters which will be checked for in s
 *
 * Return: The number of characters from accept in s
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int i = 0;
	int j = 0;
	int found;

	for (i = 0; s[i] != '\0'; i++)
	{
		found = 0;

		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				found = 1;
				break;
			}
		}
		if (found == 0)
		{
			break;
		}
		count++;
	}
	return (count);
}
