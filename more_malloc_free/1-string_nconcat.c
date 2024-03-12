#include "main.h"
#include <stdlib.h>
#include <string.h>

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
