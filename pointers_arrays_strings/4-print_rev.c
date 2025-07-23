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
 * print_rev - Function that prints a string in reverse
 * @s: The string to be checked
 *
 * Return: Void function
 */

void print_rev(char *s)
{
	int i;

	for (i = _strlen(s); i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
