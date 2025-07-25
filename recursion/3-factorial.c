#include "main.h"

/**
 * factorial - Give the factorial of a number
 * @n: The number from which the factorial is wanted
 *
 * Return: 1 if number is 0
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	if (n == 0)
	{
		return (1);
	}

	return (n * factorial(n - 1));
}
