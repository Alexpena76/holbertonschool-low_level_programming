#include "main.h"

/**
 * print_last_digit - Print the last digit of a number
 * @a: The number to be checked
 *
 * Return: Result
 */

int print_last_digit(int a)
{


	int b;

	int c;

	b = a % 10;

	if (b < 0)
	{
		c = b * -1;
	}
	else
	{
		c = b * 1;
	}

	_putchar(c + 48);

	return (c);
}
