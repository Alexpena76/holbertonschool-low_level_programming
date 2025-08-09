#include "hash_tables.h"

/**
 * hash_djb2 - Hash function implementing the djb2 algorithm
 * @str: String to be hashed
 *
 * Return: Hash value as unsigned long int, or 5381 if string is NULL/empty
 */

unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash = 5381;
	int c;

	while ((c = *str++))           /* FIX: Use the standard idiom */
	{
		hash = ((hash << 5) + hash) + c;
	}

	return (hash);
}
