#include "main.h"

/**
 * print_alphabet_x10 - with a while loop prints the alphabet in lowercase,
 * 10 times,
 * with a new line
 * Return: zero
*/


void print_alphabet_x10(void)
{
	char c;
	int i;

	i = 1;

	while (i <= 10)
	{
		c = 'a';

		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}

		_putchar('\n');
		i++;
	}
}
