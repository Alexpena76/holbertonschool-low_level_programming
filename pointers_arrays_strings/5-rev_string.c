#include "main.h"

/**
 * _strlen - gives the length of a string
 * @s: string
 *
 * Return: the length of the string
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

/**
 * rev_string - Reverses a string
 * @s: The string to be printed
 */

void rev_string(char *s)
{

	int start = 0;
	int end = _strlen(s) - 1;

	while (start < end)
	{
		char temp = s[start];

		s[start] = s[end];

		s[end] = temp;

		start++;
		end--;
	}
}
