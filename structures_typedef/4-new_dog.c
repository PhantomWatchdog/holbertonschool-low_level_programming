#include "dog.h"
#include <stdlib.h>

/**
 * *_strdup - function that return a pointer with a copy of a string.
 * @str: string copied
 *
 * Return: pointer to new string.
 */

char *_strdup(char *str)
{
	char *a;
	unsigned int inter, size = 0;

	if (str == NULL)
		return (NULL);

	while (str[size] != '\0')
		size++;
	a = malloc((size + 1) * sizeof(char));

	if (a == NULL)
		return (NULL);

	for (inter = 0; inter <= size; inter++)
		a[inter] = str[inter];

	return (a);
}

/**
 * _strcpy - Add src string to dest string
 * @dest: Receive the string from src.
 * @src: String to copy.
 * Return: dest.
 */

char *_strcpy(char *dest, char *src)
{
	int index = 0;

	while (src[index])
	{
		dest[index] = src[index];
		index++;
	}

	if (dest[index])
		dest[index] = '\0';

	return (dest);
}

/**
 * new_dog - Create a new dog.
 * @name: Store Poppy.
 * @age: Store his age.
 * @owner: Store his owner.
 * Return:
 * If function fail - NULL.
 * Else - rex.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *rex;

	rex = malloc(sizeof(dog_t));

	if (rex == NULL)
		return (NULL);

	rex->name = _strdup(name);
	rex->owner = _strdup(owner);

	if (rex->name == NULL || rex->owner == NULL)
	{
		free(rex->name);
		free(rex->owner);
		free(rex);
		return (NULL);
	}

	rex->age = age;
		return (rex);
}
