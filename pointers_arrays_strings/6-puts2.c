#include "main.h"
#include <string.h>

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
 * puts2 - prints every other character of a string
 * @str: string
 *
 * Return: void function
 */

void puts2(char *str)
{
	int i;

	for (i = 0; i <= _strlen(str); i += 2)
	{
		if (str[i] != '\0')
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
