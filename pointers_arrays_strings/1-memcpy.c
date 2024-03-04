#include "main.h"

/**
 * _memcpy - copy the src memory area to dest,
 * @src: source memory area
 * @dest: destination memory area,
 * @n: number of bytes to copy,
 * Return: dest.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{

	unsigned int index = 0;

	for (index = 0; index < n; index++)
	{
		dest[index] = src[index];
	}

	return (dest);
}
