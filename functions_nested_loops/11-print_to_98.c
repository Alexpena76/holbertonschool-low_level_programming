#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - Prints from a given number to 98
 * @n: The number where the loop starts from
 *
 * Return: Count from n to 98
 */

void print_to_98(int n)
{
	if (n <= 98)
	{
		for (; n <= 98; n++)
		{
			if (n != 98)
			{
				printf("%d, ", n);
			}
			else
				printf("%d\n", n);

		}
	}
	else
	{
		for (; n >= 98; n--)
		{
			if (n != 98)
			{
				printf("%d, ", n);
			}
			else
				printf("%d\n", n);
		}
	}
}
