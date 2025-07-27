#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strlen - calculates length of a string
 * @s: string to measure
 * Return: length of string
 */
int _strlen(char *s)
{
    int len = 0;
    
    if (s == NULL)
        return (0);
        
    while (s[len] != '\0')
        len++;
        
    return (len);
}

/**
 * _strcpy - copies a string
 * @dest: destination buffer
 * @src: source string
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
    int i = 0;
    
    if (dest == NULL || src == NULL)
        return (NULL);
        
    while (src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';  /* Add null terminator */
    
    return (dest);
}

/**
 * new_dog - Creates a new dog
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 *
 * Return: Pointer to the newly created dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog_ptr;
	int name_length;
	int owner_length;

	if (name == NULL || owner == NULL)
	{
		return (NULL);
	}

	new_dog_ptr = malloc(sizeof(dog_t));

	if (new_dog_ptr == NULL)
	{
		return (NULL);
	}

	name_length = _strlen(name) + 1;
	owner_length = _strlen(owner) + 1;

	new_dog_ptr->name = malloc(name_length);

	if (new_dog_ptr->name == NULL)
	{
		free(new_dog_ptr);
		return (NULL);
	}

	new_dog_ptr->owner = malloc(owner_length);

	if (new_dog_ptr->owner == NULL)
	{
		free(new_dog_ptr->name);
		free(new_dog_ptr);
		return (NULL);
	}

	_strcpy(new_dog_ptr->name, name);
	_strcpy(new_dog_ptr->owner, owner);

	new_dog_ptr->age = age;

	return (new_dog_ptr);
}
