#include "main.h"
#include <stdio.h>

/**
 * main - Prints the name of the program
 * @argc: Number of command line arguments
 * @argv: Array of command line argument strings
 *
 * Return: Always 0 (success)
 */

int main(int argc, char *argv[])
{
	(void)argc;
	printf("%s", argv[0]);
	printf("\n");
	return (0);
}
