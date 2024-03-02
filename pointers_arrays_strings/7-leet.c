#include "main.h"

/**
 * *leet - encode a string into 1337 / "Leet",
 * @str: contain the string.
 * Return: str.
*/

char *leet(char *str)
{

/* leet array containing chars and their position to change*/
	int index = 0, index2;
	char leet[8] = {'O', 'L', '?', 'E', 'A', '?', '?', 'T'};

	while (str[index])
	{

/* check array for leet char, upper + lower are swap by choosen leet char*/
		for (index2 = 0; index2 <= 7; index2++)
		{
			if (str[index] == leet[index2] ||
			str[index] - 32 == leet[index2])

				str[index] = index2 + '0';
		}

		index++;

	}

	return (str);
}
