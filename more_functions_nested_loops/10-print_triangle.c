#include "main.h"

/**
 * print_triangle - print a triangle,
 * @size: is the parameter used for triangles creation,
 * i: is the part who display whitespace,
 * j: display # after i++,
 * Return: zero.
*/

void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}

	else
	{
		int i;
		int j;

		for (i = 1; i <= size; i++)
		{
			for (j = i; j < size; j++)
			{
				_putchar(' ');
			}

			for (j = 1; j <= i; j++)
			{
				_putchar('#');
			}

			_putchar('\n');
		}

	}
}
