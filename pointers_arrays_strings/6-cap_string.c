#include "main.h"
#include <string.h>

/**
 * cap_string - convert lower in upper,
 * @str: contain the string.
 * Return: str.
*/

char *cap_string(char *str)
{
	int index = 0;

	while (str[index])
	{
/* check if chars are lower */
		while (!(str[index] >= 'a' && str[index] <= 'z'))
		{
			index++;
		}

/* substraction of the ASCI value 32 (diff lower/upper) for convertion */
		if (str[index - 1] == ' ' ||
		str[index - 1] == '\t' ||
		str[index - 1] == '\n' ||
		str[index - 1] == ',' ||
		str[index - 1] == ';' ||
		str[index - 1] == '.' ||
		str[index - 1] == '!' ||
		str[index - 1] == '?' ||
		str[index - 1] == '"' ||
		str[index - 1] == '(' ||
		str[index - 1] == ')' ||
		str[index - 1] == '{' ||
		str[index - 1] == '}' ||
		index == 0)

			str[index] -= 32;

		index++;
	}

	return (str);
}
