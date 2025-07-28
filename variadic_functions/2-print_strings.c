#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - Prints strings separated by a separator string
 * @separator: String to be printed between strings
 * @n: Number of strings passed to the function
 * @...: Variable number of strings to print
 *
 * Return: Void function
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i = 0;
	char *string;

	if (n == 0)
	{
		printf("\n");
		return;
	}

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		string = va_arg(args, char*);

		if (string == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", string);
		}

		if (i < n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}

	va_end(args);

	printf("\n");

}
