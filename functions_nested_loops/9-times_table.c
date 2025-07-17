#include "main.h"

/**
 * times_table - Prints the times table excluding 10
 */

void times_table(void)
{
	int i;
	int j;
	int k;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			k = i * j;
			if (k >= 10)
			{
				 _putchar((k / 10) + '0');
				 _putchar((k % 10) + '0');
				if (j != 9)
				{
					_putchar(',');
					_putchar(' ');
				}
				else
					_putchar('\n');
			}
			else
			{
				_putchar((k % 10) + '0');
			   if (j != 9)
			   {
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
			   }
			   else
					_putchar('\n');
			}

		}
		_putchar('\n');
	}

}
