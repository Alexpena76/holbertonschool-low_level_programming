#include "main.h"

/**
 * _pow_recursion - Gives the first operand to the power of the second
 * @x: Number to be exponentialized
 * @y: Exponentialization number
 *
 * Return: Recursion
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}

	if (y == 0)
	{
		return (1);
	}

	return (x * _pow_recursion(x, y - 1));
}
