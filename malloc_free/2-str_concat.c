#include "main.h"
#include <stdlib.h>

/**
 * *str_concat - Concatenates two strings.
 * @s1: First string.
 * @s2: Second string.
 *
 * Return: Always 0.
 */

char *str_concat(char *s1, char *s2)
{
	int length1 = 0, length2 = 0, index, jndex;
	char *concat_str;

	s1 = (s1 == NULL) ? "" : s1;
	s2 = (s2 == NULL) ? "" : s2;

	/* Calcul the length of s1 */
	while (s1[length1] != '\0')
	{
		length1++;
	}

	/* Calcul the length of s2 */
	while (s2[length2] != '\0')
	{
		length2++;
	}

	/* Alloc memory for the strings */
	concat_str = malloc((length1 + length2 + 1) * sizeof(char));
	if (concat_str == NULL)
	{
		return (NULL);
	}

	/* copy the chars from s1 to concat_str */
	for (index = 0; s1[index] != '\0'; index++)
	{
		concat_str[index] = s1[index];
	}

	/* copy the chars from s2 to concat_str */
	for (jndex = 0; s2[jndex] != '\0'; index++, jndex++)
	{
		concat_str[index] = s2[jndex];
	}

	/* Add '\0' at end of string */
	concat_str[index] = '\0';
	return (concat_str);
}
