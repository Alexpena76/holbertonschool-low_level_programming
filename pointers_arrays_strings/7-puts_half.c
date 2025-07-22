#include "main.h"


/**
 * _strlen - gives the length of a string
 * @s: string
 *
 * Return: the length of the string
 */


int _strlen(char *s)
{
	int contador = 0;

	while (s[contador] != '\0')
	{
		contador++;
	}
	return (contador);
}

/**
 * _putshalf - gives half of a string
 * @str: string
 *
 * Return: void function
 */

void puts_half(char *str)
{
    int i;

    for (i = _strlen(str)/2; i <= _strlen(str); i++)
    {
        _putchar(str[i]);
    }
    _putchar('\n');
}