#include "dog.h"
#include <stdlib.h>

/**
 * _strlen - Calcul the string length.
 * @s: The string to check.
 * Return: Length.
 */

int _strlen(char *s)
{
	char *ptr = s;

	while (*ptr != '\0')
	{
		ptr++;
	}

	return (ptr - s);

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
	int length1, length2;

	length1 = _strlen(name);
	length2 = _strlen(owner);

	/* Check prerequirements */
	if (name == NULL || age < 0 || owner == NULL)
	{
		return (NULL);
	}

	/* Alloc ram for a new structure dog and stock it in rex */
	rex = malloc(sizeof(dog_t));
	if (rex == NULL)
	{
		return (NULL);
	}

	/* Alloc ram for name string from dog struct */
	rex->name = malloc(sizeof(char) * (length1 + 1));
	if (rex->name == NULL)
	{
		free(rex);
		return (NULL);
	}

	/* Alloc ram for owner from dog struct */
	rex->owner = malloc(sizeof(char) * (length2 + 1));
	if (rex->owner == NULL)
	{
		free(rex->name);
		free(rex);
		return (NULL);
	}

	rex->name = _strcpy(rex->name, name);
	rex->age = age;
	rex->owner = _strcpy(rex->owner, owner);
	return (rex);
}
