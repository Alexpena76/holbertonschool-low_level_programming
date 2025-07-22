#include "main.h"
#include <string.h>

/**
 * puts2 - prints every other character of a string
 * @str: string
 *
 * Return: void function
 */

void puts2(char *str)
{
	int i;

	int m = strlen(str);

	for (i = 0; i <= m; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
