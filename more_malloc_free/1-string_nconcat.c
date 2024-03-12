#include "main.h"
#include <stdlib.h>

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
	unsigned int length = n, index;
	char *alloc;

	/* If s1 or s2 is NULL, consider as empty */
	s1 = (s1 == NULL) ? "" : s1;
	s2 = (s2 == NULL) ? "" : s2;

	/* Calcul the total length */
	for (index = 0; s1[index]; index++)
		length++;

	alloc = malloc((length + 1) * sizeof(char));

	/* Check if malloc succeed */
	alloc = (alloc == NULL) ? NULL : alloc;

	length = 0;
	/* Copy s1 in alloc */
	for (index = 0; s1[index]; index++)
		alloc[length++] = s1[index];

	/* concatenation of n char from s2 to alloc */
	for (index = 0; s2[index] && index < n; index++)
		alloc[length++] = s2[index];

	/* End string with NULL */
	alloc[length] = '\0';

	return (alloc);
}
