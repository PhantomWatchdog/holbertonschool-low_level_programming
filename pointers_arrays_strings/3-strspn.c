#include "main.h"

/**
 * _strspn - get the length of a prefix substring,
 * @s: the string to check,
 * @accept: contain the chars accepted,
 * Return: the count of bytes accepted.
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int counter = 0;

	for (; *s != '\0'; s++)
	{
		if (*s != ' ')
		{
			char *p = accept;

			while (*p != '\0' && *s != *p)
				p++;

			if (*p == '\0')
				return (counter);

			counter++;
		}

		else
		{
			return (counter);
		}
	}

	return (counter);
}
