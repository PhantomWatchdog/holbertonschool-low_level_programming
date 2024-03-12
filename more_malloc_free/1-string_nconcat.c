#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * * _strlen - Check string length.
 * @s: Parameter to s string.
 * ptr: Pointer to the s value;
 * Return: length.
 */

int _strlen(char *s)
{
	char *ptr = s;

	while (*ptr != '\0')
	{
		ptr++;
	}

	return (ptr - s);

}

/**
 * _strcpy - Copy src string to dest string.
 * @dest: Receive the string containded by src;
 * @src: Contain the string to copy,
 * Return: dest.
 */

char *_strcpy(char *dest, char *src)
{
	int index = 0;

	while (src[index])
	{
		dest[index] = src[index];
		index++;
	}

	if (dest[index])
		dest[index] = '\0';

	return (dest);
}

/**
 * _strncat - Concatenation of two str.
 * @dest: Destination,
 * @src: Source,
 * @n: Add n char at end of string,
 * Return: dest.
 */

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

/**
 * string_nconcat - Concatenate two strings.
 * @s1: First string.
 * @s2: Second string.
 * @n: The first n bytes contained in s2.
 * Return:
 * If s1 or s2 == NULL - NULL.
 * If function fail - NULL.
 * Else - alloc.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int length1 = 0, length2 = 0, total;
	char *alloc;

	/* If s1 or s2 is NULL, consider as empty */
	s1 = (s1 == NULL) ? "" : s1;
	s2 = (s2 == NULL) ? "" : s2;

	/* Calcul the s1 and s2 length */
	length1 = strlen(s1);
	length2 = strlen(s2);

	/* If n >= length2, use s2 length */
	n = (n >= length2) ? length2 : n;

	/* Calcul the total length */
	total = length1 + n;

	alloc = malloc((total + 1) * sizeof(char));

	/* Check if malloc succeed */
	alloc = (alloc == NULL) ? NULL : alloc;

	/* Copy s1 in alloc */
	strcpy(alloc, s1);

	/* Concatenates s2 first n bytes to alloc */
	strncat(alloc, s2, n);

	/* End string with NULL */
	alloc[total] = '\0';

	return (alloc);
}
