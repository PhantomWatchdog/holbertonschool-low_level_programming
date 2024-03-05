#include "main.h"

/**
 * _strstr - locate a substring,
 * @haystack: contain the string to analyze,
 * @needle: contain the substring to find in haystack,
 * Return: NULL.
 */

char *_strstr(char *haystack, char *needle)
{
	int index;

	if (*needle == '\0')
	{
		return (haystack);
	}

	while (*haystack)
	{
		index = 0;

		while (haystack[index] == needle[index])
		{
			if (needle[index + 1] == '\0')
				return (haystack);

			index++;
		}

		haystack++;

	}

	return ('\0');

}
