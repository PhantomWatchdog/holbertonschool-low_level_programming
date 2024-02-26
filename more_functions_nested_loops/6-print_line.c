#include "main.h"

/**
 * print_line - print x times '_' due to n value,
 * @n: contain the x times value required,
 * i: number of incrementation due to n value,
 * new line as break if n = 0,
 * Return: zero
*/

void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	}

	else
	{

		for (i = 1; i <= n; i++)
		{
			_putchar('_');
		}
	}

	_putchar('\n');
}
