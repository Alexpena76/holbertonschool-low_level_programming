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
 * puts_half - gives half of a string
 * @str: string
 *
 * Return: void function
 */

void puts_half(char *str)
{
	int i;
	int j = _strlen(str);

	if (j % 2 > 0)
	{
		j = _strlen(str) + 1;
	}

	for (i = j / 2; i < j; i++)
	{
		if (str[i] != '\0')
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
