#include "main.h"

/**
 * _strpbrk - prints the letters of a string associated with accept
 * @s: String
 * @accept: letters which will be checked for in s
 *
 * Return: The letter from accept found in s
 */

char *_strpbrk(char *s, char *accept)
{
	int i = 0;
	int j = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return (&s[i]);
			}
		}
	}
	return ('\0');
}
