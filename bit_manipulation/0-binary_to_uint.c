#include <stdio.h>

/**
 * binary_to_uint - Conversion of a binary number in uint.
 * @b: Pointer to a string 0 and 1.
 * Return: The converted number in decimal format.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;

	if (b == NULL)
	{
		return (0);
	}

	while (*b != '\0')
	{
		if (*b != '0' && *b != '1')
		{
			return (0);
		}

		/*Conversion of b in ui with ASCII value*/
		result = (result << 1) + (*b - '0');
		b++;
	}

	return (result);
}
