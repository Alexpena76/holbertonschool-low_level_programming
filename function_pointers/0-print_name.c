#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - Prints a name using a given function
 * @name: The name to print
 * @f: Pointer to the function to use for printing
 *
 * Return: Void function
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL)
	{
		return;
	}

	if (f == NULL)
	{
		return;
	}

	f(name);
}
