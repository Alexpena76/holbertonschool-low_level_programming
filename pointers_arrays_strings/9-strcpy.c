#include "main.h"

/**
 * _strlen - gives the length of a string
 * @s: string
 *
 * Return: the length of the string
 */


int _strlen(char *s)
{
	int counter = 0;

	while (s[counter] != '\0')
	{
		counter++;
	}
	return (counter);
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

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	dest[i] = '\0';

	return (dest);
}
