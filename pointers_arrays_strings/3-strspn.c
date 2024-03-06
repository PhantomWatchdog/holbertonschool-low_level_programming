#include "main.h"

/**
 * _strspn - get the length of a prefix substring,
 * @s: the string to check,
 * @accept: contain the chars accepted,
 * Return: the count of bytes accepted.
 */

unsigned int _strspn(char *s, char *accept)
{
	char *p;
	unsigned char count = 0;

	while (*s != '\0')
	{
		p = accept;

		while (*p != '\0')
		{
			if (*s == *p)
				break;
			p++;
		}

		if (*p == '\0')
			return (count);
		count++;
		s++;
	}

	return (count);
}
