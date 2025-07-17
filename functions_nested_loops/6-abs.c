#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * _abs - Give an absolute value of a number
 * @n: The number to be evaluated
 *
 * Return: -n if the number is negative. n otherwise
 */

int _abs(int n)
{

	if (n < 0)
	{
		return (-n);
	}
	else
	{
		return (n);
	}


	return (0);
}
