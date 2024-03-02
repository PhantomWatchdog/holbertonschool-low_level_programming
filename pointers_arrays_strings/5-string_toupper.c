#include "main.h"

/**
 * string_toupper - check each character and convert lower in upper,
 * @str: contain the string.
 * Return: str.
*/

char *string_toupper(char *str)
{
	int index = 0;

	while (str[index])
	{
/* check if chars are lower, if true convert them */
		if (str[index] >= 'a' && str[index] <= 'z')
		{

/* substraction of the ASCI value 32 (diff lower/upper) for convertion */
			str[index] -= 32;
		}

		index++;
	}

	return (str);
}
