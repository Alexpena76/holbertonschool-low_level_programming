#include "main.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * main - Multiplies two numbers passed as command line arguments
 * @argc: Number of command line arguments
 * @argv: Array of command line arguments
 *
 * Return: 0 on success, 1 if wrong arguments
 */

int main(int argc, char *argv[])
{
	int num1;
	int num2;
	int result;

	if (argc != 3)
	{
		printf("Error");
		printf("\n");
		return (1);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	result = num1 * num2;

	printf("%d", result);

	printf("\n");

	return (0);

}
