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
    int j = _strlen(str);

    for (i = j/2; i < j; i++)
    {
        if(str[i] != '\0')
        {
            _putchar(str[i]);
        }
    }
    _putchar('\n');
}