#include "main.h"

/**
 * cap_string - convert lower in upper,
 * @str: contain the string.
 * Return: str.
*/

char *cap_string(char *str)
{
	int index = 0;
	int i;
	char tab[] = {',', ';', '.', '!', '?', '"', '(', ')', '{', '}'};

	while (str[index])
	{
/* check if chars are lower, if true convert them */
		if (str[index] >= 'a' && str[index] <= 'z')
		{

/* substraction of the ASCI value 32 (diff lower/upper) for convertion */
			str[index] -= 32;
		}

		else
		{

			for (i = 0; i < tab[i]; i++)
			{
				if (str[index] == tab[i])
				{
					str[index] -= 32;
					break;
				}
			}
		}

		index++;
	}

	return (str);
}
