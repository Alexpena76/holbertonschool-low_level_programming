#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * _islower - Check if a letter is lowercase
 * @c: The letter to be checked
 *
 * Return: 1 if the letter is lowercase. 0 otherwise
 */

int _islower(int c)
{
	char c;

	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
