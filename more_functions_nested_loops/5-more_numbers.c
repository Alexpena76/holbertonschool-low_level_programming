#include "main.h"

/**
 * more_numbers - prints the numbers 0-14 10 times
 */

void more_numbers(void)
{
	for (int i = 0; i <= 9; i++)
	{
		for (int j = 0; j <= 14; j++)
		{

			if (j >= 10)
			{
				_putchar(j / 10 + 48);
				_putchar(j % 10 + 48);
			}
			else
				_putchar(j + 48);

		}
		_putchar('\n');
	}
}
