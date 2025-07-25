#include "main.h"
#include <stdio.h>

/**
 * main - Prints the number of arguments passed to the program
 * @argc: Number of commnd line arguments
 * @argv: Array of command line argument strings (unused)
 *
 * Return: Always 0 (success)
 */

int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d", argc - 1);
	printf("\n");
	return (0);
}
