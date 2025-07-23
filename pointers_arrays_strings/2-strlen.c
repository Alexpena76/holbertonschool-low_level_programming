#include <stdio.h>

/**
 * _strlen - Function that returns the length of a string
 * @s: The string to be checked
 *
 * Return: Counter of the string
 */

int _strlen(char *s)
{
	int counter = 0;

	while (s[counter] != '\0')
	{
		counter++;
	}
	return (counter);
}
