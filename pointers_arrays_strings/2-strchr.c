#include "main.h"

/**
 * _strchr - locate the char in a string,
 * @s: contain the string to analyze,
 * @c: character to found in the string,
 * Return: s without c.
 */

char *_strchr(char *s, char c)
{

/* increment string until finding c */
	while (*s != '\0' && *s != c)
	{
		s++;
	}
/* return s if c is find or c is NULL, else return NULL */
	return ((*s == c || c == '\0') ? s : '\0);
}
