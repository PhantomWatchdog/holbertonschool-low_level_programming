#include "main.h"
#include <string.h>

/**
 * _strlen - char* length results of the function,
 * @s: is the parameter pointer receiving char*,
 * @ptr: contain the s value;
 * Return: .
 */

int _strlen(char *s)
{
	char *ptr = s;

	while (*ptr != '\0')
	{
		ptr++;
	}

	return (ptr - s);

}
