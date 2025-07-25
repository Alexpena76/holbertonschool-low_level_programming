#include "main.h"

/**
 * prime_helper - Check if a number is prime
 * @n: The number to be checked
 * @divisor: Divisor
 *
 * Return: 1 if prime 0 if not
 */

int prime_helper(int n, int divisor)
{
	if (divisor * divisor > n)
	{
		return (1);
	}

	if (n % divisor == 0)
	{
		return (0);
	}

	return (prime_helper(n, divisor + 1));
}

/**
 * is_prime_number - Checks if a number is prime
 * @n: The number to be checked
 *
 * Return: Return 1 if the number is prime and 0 otherwise
 */

int is_prime_number(int n)
{
	if (n < 2)
	{
		return (0);
	}

	if (n == 2)
	{
		return (1);
	}
	return (prime_helper(n, 2));
}
