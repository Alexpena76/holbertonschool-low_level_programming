#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * print_alphabet_x10 - Prints the alphabet 10 times
 */

void print_alphabet_x10(void)
{
	char i;

	for (int j = 0; j <= 10; j++)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			putchar(i);
		}
		putchar('\n');
	}
}
