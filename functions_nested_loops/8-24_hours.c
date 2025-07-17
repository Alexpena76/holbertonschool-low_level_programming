#include "main.h"

/**
 * jack_bauer - Prints every hour and minute possible
 */

void jack_bauer(void)
{

	int n;
	int m;

	for (n = 0; n <= 23; n++)
	{
		for (m = 0; m <= 59; m++)
		{
			int a = n;
			int b = m;
			int c = a / 10;
			int d = a % 10;
			int e = b / 10;
			int f = b % 10;
			_putchar(c + 48);
			_putchar(d + 48);
			_putchar(':');
			_putchar(e + 48);
			_putchar(f + 48);
			_putchar('\n');

		}
	}
}
