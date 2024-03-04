#include "main.h"

/**
 * _strbrk - search the first occurence in a string,
 * @s: string containing a set of bytes,
 * @:
 * Return: Always 0.
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
