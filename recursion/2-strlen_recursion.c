#include "main.h"

/**
 * _strlen_recursion - Check the length of a string
 * @s: The string to be checked
 *
 * Return: Length of the string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}

	return (1 + _strlen_recursion(s + 1));
}
