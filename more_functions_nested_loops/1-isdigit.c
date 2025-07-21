#include "main.h"

/**
 * _isdigit - Checks if a value is a digit
 * @c: The value to be checked
 *
 * Return: 1 if number. 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= 0 + 48 && c <= 9 + 48)
	{
		return (1);
	}
	else
		return (0);
}
