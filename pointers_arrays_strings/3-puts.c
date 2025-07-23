#include <unistd.h>
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
 * _puts - Prints a string
 * @str: Variable to be printed
 *
 * Return: Void function
 */

void _puts(char *str)
{
	int n;

	n = _strlen(str);

	write(1, str, n);

	_putchar('\n');
}
