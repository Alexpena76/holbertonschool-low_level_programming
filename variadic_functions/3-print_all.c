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
    char *string_arg;
    char types[] = "cifs";
    int j;

    va_start(args, format);

    while (format != NULL && format[i] != '\0')
    {
        current_char = format[i];
        j = 0;

        while (types[j] != '\0')
        {
            if (current_char == types[j])
            {
                printf("%s", separator);
                
                (j == 0) && (printf("%c", va_arg(args, int)), 0);
                (j == 1) && (printf("%d", va_arg(args, int)), 0);
                (j == 2) && (printf("%f", va_arg(args, double)), 0);
                (j == 3) && (string_arg = va_arg(args, char*), 
                    (string_arg == NULL) && (printf("(nil)"), 0),
                    (string_arg != NULL) && (printf("%s", string_arg), 0), 0);
                
                separator = ", ";
                break;
            }
            j++;
        }

        i++;
    }

    va_end(args);
    printf("\n");
}


