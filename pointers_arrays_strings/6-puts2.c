#include "main.h"

/**
 * puts2 - display selected chars in *str,
 * @str: contain the char*
 * i: incrementation by 2,
 * Return: Always 0.
 */

void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i += 2)
	{
		_putchar(str[i]);
	}
	
	i--;

	_putchar('\n');
}
