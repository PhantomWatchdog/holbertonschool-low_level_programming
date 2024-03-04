#include "main.h"

/**
 * _memset - fills memory with a constant byte,
 * @s: pointer to a memory area,
 * @b: the buffer to print,
 * @n: size of memory to print,
 * Return: s.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int index;

	for (index = 0; index < n; index++)
	{
		s[index] = b;
	}

	return (s);
}
