#include "main.h"
#include <stdio.h>

/**
 * _atoi - copy src string to dest,
 * @s: the parameter containing the complete string,
 * before the digits sort (positive and negative),
 *
 * Return: dest.
 */

int _atoi(char *s)
{
	int n = 0;
	int d = 0;
	int i;

	for (i = 0; s[i] != '\0'; ++i)
	{
		if (s[i] == '-')
		{
			++d;
		}

		else if (s[i] >= '0' && s[i] <= '9')
		{
			int digit = s[i] - '0';

			if (d % 2)
			{
				digit = -digit;
			}

			n = n * 10 + digit;

			if (!(s[i + 1] >= '0' && s[i + 1] <= '9'))
			{
				break;
			}
		}
	}

	return (n);
}
