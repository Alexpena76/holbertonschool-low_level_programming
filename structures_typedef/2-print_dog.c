#include "dog.h"
#include <stdio.h>

/**
 * print_dog - Prints a struct dog
 * @d: Pointer to the struct dog to print
 *
 * Return: Void function
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}

	printf("Name: ");

	if (d->name == NULL)
	{
		printf("(nil)");
	}
	else
	{
		printf("%s", d->name);
	}
	printf("\n");

	printf("Age: ");
	printf("%f", d->age);
	printf("\n");

	printf("Owner: ");

	if (d->owner == NULL)
	{
		printf("(nil)");
	}
	else
	{
		printf("%s", d->owner);
	}

	printf("\n");

}
