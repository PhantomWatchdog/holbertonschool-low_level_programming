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
		for (index = 0; needle[index] && needle[index] == haystack[index]; index++)
		{
			if (*haystack == needle[index] || needle[index + 1] == '\0')
				return (haystack);
		}

		haystack++;

	}

	return ('\0');

}
