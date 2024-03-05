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

	while (*haystack)
	{
		for (index = 0; needle[index] && needle[index] == haystack[index]; index++)
		{
			if (*haystack == needle[index])
				return (haystack);
		}

		haystack++;

	}

	return ('\0');

}
