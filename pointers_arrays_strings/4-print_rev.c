#include "main.h"

/**
 * print_rev - print a char* with rev order,
 * i: array incrementation until last value for char count,
 * followed by decrementation until first char,
 * _putchar display the result,
 * Return: zero.
 */

void print_rev(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
	}

	for (i--; i >= 0; i--)
	{
		_putchar(s[i]);
	}

	_putchar('\n');

}
