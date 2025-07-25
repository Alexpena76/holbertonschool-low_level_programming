#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Prints the sums of the diagonals of a 2-d array
 * @a: Array
 * @size: Size
 *
 * Return: Void function
 */

void print_diagsums(int *a, int size)
{
	int main_diagonal_sum = 0;
	int anti_diagonal_sum = 0;
	int i = 0;

	for (i = 0; i < size; i++)
	{
		main_diagonal_sum += a[i * size + i];

		anti_diagonal_sum += a[i * size + (size - 1 - i)];
	}
	printf("%d, %d\n", main_diagonal_sum, anti_diagonal_sum);
}
