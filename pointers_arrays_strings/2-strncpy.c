#include "main.h"

/**
 * _strncpy - function used for string copy,
 * @dest: destination,
 * @src: source,
 * @n: parameter adding NULL when reached,
 * Return: dest.
 */

/* function declaration with 3 pointer, 3 parameters (*dest, *src, n) */
char *_strncpy(char *dest, char *src, int n)
{
	int dest_length = 0;
	int index = 0;

/* determine the dest lenght chain */
	while (dest[index++])
		dest_length++;

/* copy the src chain to dest chain, adding '\0' when n is reached*/
	for (index = 0; src[index] != '\0' && index < n; index++)
		dest[index] = src[index];
	for (; index < n; index++)
		dest[index] = '\0';

	return (dest);
}
