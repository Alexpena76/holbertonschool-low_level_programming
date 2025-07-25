#include "main.h"

/**
 * _sqrt_recursion - Check for the square root of a number
 * @n: The number to be checked for
 *
 * Return: _sqrt_helper's return (see below)
 */


int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	if (n == 0 || n == 1)
	{
		return (n);
	}

	return (_sqrt_helper(n, 1));
}

/**
 * _sqrt_helper - Check for the square root of a number
 * @n: The number to be checked for
 * @guess: The guess for the number's square root
 *
 * Return: The guess of a number's square root + 1
 */

int _sqrt_helper(n, guess)
{
	if (guess *guess == n)
	{
		return (guess);
	}

	if (guess *guess > n)
	{
		return (-1);
	}
	return (_sqrt_helper(n, guess + 1));
}
