#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "1.h"

/**
 * print_alphabet - Prints the alphabet
 */

void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
