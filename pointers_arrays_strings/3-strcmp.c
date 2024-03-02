#include "main.h"

/**
 * _strcmp - function used for two str comparition,
 * @s1: first string,
 * @s2: second string to compare,
 * Return: difference.
 */

/* function declaration with 2 pointer, 2 parameters (*s1, *s2) */
int _strcmp(char *s1, char *s2)
{
	while (*s1 == *s2)
	{
		if (*s1 == '\0')
		{
			return (0);
		}

		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
