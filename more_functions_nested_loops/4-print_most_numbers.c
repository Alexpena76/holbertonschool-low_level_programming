#include "main.h"

/**
 * print_most_numbers - Prints from 0-9 (except 2 and 4) followed by a new line
 */

void print_most_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		if (!(i == 2 || i == 4))
		{
			_putchar(i + 48);
		}
	}
	_putchar('\n');
}
