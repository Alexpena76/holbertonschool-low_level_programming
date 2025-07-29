#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/*
 * print_all - prints anything based on format specifiers
 * @format: list of types of arguments passed to the function
 *          c: char
 *          i: integer
 *          f: float
 *          s: char * (prints (nil) if string is NULL)
 *          any other char is ignored
 *
 * Return: void
 */

void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0;
	char *separator = "";
	char current_char;
	char char_arg;
	int int_arg;
	float float_arg;
	char *string_arg;

	va_start(args, format);

	while (format != NULL && format[i] != '\0')  
	{
		current_char = format[i];

		
		if (current_char == 'c' || current_char == 'i' || current_char == 'f' || current_char == 's')
		{
			printf("%s", separator);

			while (1)
			{
				
				while (current_char == 'c')
				{
					char_arg = va_arg(args, int);
					printf("%c", char_arg);
					break;
				}

				while (current_char == 'i')
				{
					int_arg = va_arg(args, int);
					printf("%d", int_arg);
					break;
				}

				while (current_char == 'f')
				{
					float_arg = va_arg(args, double);
					printf("%f", float_arg);
					break;
				}

				while (current_char == 's')
				{
					string_arg = va_arg(args, char*);
					
					if (string_arg == NULL)
						printf("(nil)");
					while (string_arg != NULL)  
					{
						printf("%s", string_arg);
						break;
					}
					break;
				}
				break;  
			}

			separator = ", ";
		}

		i++;
	}

	va_end(args);
	printf("\n");
}
