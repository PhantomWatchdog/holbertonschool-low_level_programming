#include "main.h"

/**
 * _strncat - function used for two str concatenation,
 * @dest: destination,
 * @src: source,
 * @n: parameter for n char add at end of string,
 * Return: dest.
 */

/* function declaration with 3 pointer, 3 parameters (*dest, *src, n) */
char *_strncat(char *dest, char *src, int n)
{
	int dest_length = 0;
	int index = 0;

/* determine the dest lenght chain */
	while (dest[index++])
		dest_length++;

/* concatenates the src chain to dest chain with max n added */
	for (index = 0; src[index] && index < n; index++)
		dest[dest_length++] = src[index];

	return (dest);
}

