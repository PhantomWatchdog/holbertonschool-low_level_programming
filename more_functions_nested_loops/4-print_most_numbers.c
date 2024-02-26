#include "main.h"

/**
 * print_most_numbers - print each numbers from 0 to 9,
 * exept 2 and 4;
 * Return: zero.
*/

void print_most_numbers(void)
{
	int i;

	for (i = '0'; i >= '0' && i <= '9'; i++)
	{
		if (i != '2' && i != '4')
		{
			_putchar(i);
		}
	}

_putchar('\n');

}
