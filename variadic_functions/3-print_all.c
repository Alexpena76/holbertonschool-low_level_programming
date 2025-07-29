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

    // WHILE LOOP #1: Main format string loop
    while (format != NULL && format[i] != '\0')
    {
        current_char = format[i];
        j = 0;

        // WHILE LOOP #2: Check if current_char matches any valid type
        while (types[j] != '\0')
        {
            // IF #1: Found a matching valid type
            if (current_char == types[j])
            {
                printf("%s", separator);
                
                // Handle each type using the same j index
                j == 0 && printf("%c", va_arg(args, int));
                j == 1 && printf("%d", va_arg(args, int));  
                j == 2 && printf("%f", va_arg(args, double));
                j == 3 && (string_arg = va_arg(args, char*)) && 
                    // IF #2: Handle NULL string
                    (string_arg == NULL && printf("(nil)")) + 
                    (string_arg != NULL && printf("%s", string_arg));
                
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

