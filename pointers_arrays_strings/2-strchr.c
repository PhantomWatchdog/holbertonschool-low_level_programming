#include "main.h"

/**
 * _strchr - locate the char in a string,
 * @s: contain the string to analyze,
 * @c: character to found in the string,
 * Return: s without c.
 */

char *_strchr(char *s, char c)
{
/* increment */ 
	while (*s != '\0' && *s != c)
	{
		s++;
	}

	return ((*s == c || c == '\0') ? s : '\0');
}
