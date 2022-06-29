#include <stdlib.h>
#include <stdio.h>
#include "dog.h"
#include <string.h>

/**
 * strcopy - copy given string in src into dest
 * @dest: where to copy src
 * @src: string to be copied
 * Return: 0 (successfull)
 */
char *strcopy(char *dest, char *src)
{
	while ((*dest++ = *src++) != '\0')
		;
	return (0);
}

/**
 * new_dog - function to create a newdog struct
 * we keep a copy of name and owner.
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 * Return: NULL if it fails, pointer to new struct otherwise
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newdog;
	char *newname;
	char *newown;
	int len;

	newdog = malloc(sizeof(dog_t));
	if (newdog == NULL)
		return (NULL);

	len = 0;
	while (name[len] != '\0')
		len++;
	len++;
	newname = malloc(len * sizeof(*name));
	if (newname == NULL)
	{
		free(newdog);
		return (NULL);
	}

	len = 0;
	while (owner[len] != '\0')
		len++;
	len++;
	newown = malloc(len * sizeof(*owner));
	if (newown == NULL)
	{
		free(newname);
		free(newdog);
		return (NULL);
	}

	strcopy(newname, name);
	strcopy(newown, owner);
	newdog->name = newname;
	newdog->owner = newown;
	newdog->age = age;
	return (newdog);
}
