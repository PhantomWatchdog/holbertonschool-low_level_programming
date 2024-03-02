#include "main.h"

/**
 * _strcat - function used for concatenation,
 * @dest: destination,
 * @src: source,
 * Return: dest.
 */

/* function declaration with 3 pointer, 2 parameters (*dest, *src) */
char *_strcat(char *dest, char *src)
{
	int dest_length = 0;
	int index = 0;

/* determine the dest lenght chain */
	while (dest[index++])

		dest_length++;

/* concatenates the src chain to dest chain */

	for (index = 0; src[index]; index++)
		dest[dest_length++] = src[index];

	return (dest);
}
