#include "main.h"
#include <stdlib.h>

/**
 * *_strdup - Return a *str copy to new memory space (copy).
 * @str: Pointer str containing string.
 * Return:
 * If str == NULL - NULL.
 * If copy == NULL - NULL.
 * Else - copy.
 */

char *_strdup(char *str)
{
	unsigned int index, length = 0;
	char *copy;

	if (str == NULL)

		return (NULL);

	/* calcul the length of str */
	while (str[length] != '\0')
	{
		length++;
	}

	/* alloc ram for copy str + 1 ('\0') */
	copy = malloc((length + 1) * sizeof(char));

	/* check if alloc's done */
	if (copy == NULL)
		return (NULL);

	/* paste str in new memory space copy + ('\0') */
	for (index = 0; index <= length; index++)
	{
		copy[index] = str[index];
	}

	return (copy);
}
