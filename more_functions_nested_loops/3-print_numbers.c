#include "main.h"

/**
 * print_numbers - Prints from 0-9 followed by a new line
 */

void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		_putchar(i + 48);
	}
	_putchar('\n');
}
