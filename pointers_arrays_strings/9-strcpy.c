#include "main.h"
#include <stdio.h>

/**
 * _strcpy - function swaping string with two parameters,
 * @dest: will receive the string containded by src;
 * @src: contain the string to copy,
 * Return: dest.
 */

char *_strcpy(char *dest, char *src)
{
	int index = 0;

	while (src[index] != '\0')
	{
		dest[index] = src[index];
		index++;
	}

	return (dest);
}
