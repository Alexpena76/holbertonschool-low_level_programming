#include "main.h"
#include <stdio.h>

/**
 * print_array - Gives the array with the length assigned by the user
 * @a: array
 * @n: length desired
 *
 * Return: void function
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i != n - 1)
		{
			printf("%d, ", a[i]);
		}
		else
			printf("%d", a[i]);
	}
	printf("\n");
}
