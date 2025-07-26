#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main- Adds positive numbers passed as command line arguments
 * @argc: Number of command line arguments
 * @argv: Array of command line argument strings
 *
 * Return: 0 on success, 1 if invalid input is found
 */

int main(int argc, char *argv[])
{
	int sum = 0;
	int i = 0;
	int j = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		sum = sum + atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
