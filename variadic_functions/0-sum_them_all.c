#include <stdarg.h>

/**
 * sum_them_all - Returns the sum of all its parameters
 * @n: Number of parameters to sum
 * @...: Variable number of integers to add
 *
 * Return: The sum of all parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	int sum = 0;
	unsigned int i = 0;

	if (n == 0)
	{
		return (0);
	}

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		sum = sum + va_arg(args, int);
	}

	va_end(args);

	return (sum);
}
