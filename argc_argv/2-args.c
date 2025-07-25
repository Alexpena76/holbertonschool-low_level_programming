#include "main.h"
#include <stdio.h>

/**
 * main - Prints all command line arguments, one per line
 * @argc: Number of command line arguments
 * @argv: Array of command line argument strings
 *
 * Return: Always 0 (success)
 */

int main(int argc, char *argv[])
{
	int i = 0;

	for (i = 0; i <= (argc - 1); i++)
	{
		printf("%s", argv[i]);
		printf("\n");
	}
	return (0);
}
