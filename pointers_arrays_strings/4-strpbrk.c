#include "main.h"

/**
 * _strpbrk - search the first occurence in a string,
 * @s: string containing a set of bytes,
 * @accept: contain the occurrence to find,
 * Return: NULL.
 */

char *_strpbrk(char *s, char *accept)
{
	int index;

	while (*s)
	{
		for (index = 0; accept[index]; index++)
		{
			if (*s == accept[index])
				return (s);
		}

		s++;

	}

	return ('\0');

}
