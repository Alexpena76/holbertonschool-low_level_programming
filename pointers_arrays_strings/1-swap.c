#include "main.h"

/**
 * swap_int - Swaps the values of two numbers
 * @a: First operand
 * @b: Second operand
 *
 * Return: Void function
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
