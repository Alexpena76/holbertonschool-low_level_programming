#include "main.h"

/**
 * _print_rev_recursion - Print a string in reverse
 * @s: The string to be reversed
 *
 * Return: Void function
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}

	_print_rev_recursion(s + 1);

	_putchar(*s);
}
