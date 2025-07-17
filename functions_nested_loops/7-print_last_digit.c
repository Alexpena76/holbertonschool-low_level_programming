#include "main.h"

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