#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: The string to be printed
 */

void rev_string(char *s)
{

	int start = 0;
	int end = _strlen(s) - 1;

	while (start < end)
	{
		char temp = s[start];

		s[start] = s[end];

		s[end] = temp;

		start++;
		end--;
	}
}
