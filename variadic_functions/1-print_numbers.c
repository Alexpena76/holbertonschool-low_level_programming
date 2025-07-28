#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - Prints numbers separated by a string
 * @separator: String to be printed between numbers
 * @n: Number of integers passed to the function
 * @...: Variable number of integers to print
 *
 * Return: Void function
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i = 0;
	int number;

	if (n == 0)
	{
		printf("\n");
		return;
	}

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		number = va_arg(args, int);

		printf("%d", number);

		if (i < n - 1 && separator != NULL)
		{
			printf("%s", separator);
   		}

   	}

	va_end(args);

	printf("\n");

}
