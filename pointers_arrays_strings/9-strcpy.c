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
 * _strcpy - Copies a string onto the first parameter
 * @dest: string in which the desired string will be copied to
 * @src: string
 *
 * Return: memory address of the first parameter
 */

char *_strcpy(char *dest, char *src)
{
	int i;
	int k = _strlen(src);

	for (i = 0; i <= k; i++)
	{
		dest[i] = src[i];
	}

	dest[i + 1] = '\0';

	return (dest);
}
