#include "main.h"

/**
 * print_diagonal - print x times '/' due to n,
 * @n: contain the x times value required,
 * i: number of incrementation due to n value,
 * with a new line as break if n = 0,
 * Return: zero
*/

void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}

	else
	{
		int i;
		int j;

		for (i = 0; i <= n; i++)
		{
			for (j = 0; j < n; j++)
			{
				if (j == i)
				{
					_putchar('/');
				}
				else
				{
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
}
