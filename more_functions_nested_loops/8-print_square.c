#include "main.h"

/**
 * print_square - print x times '#' due to size value,
 * @size: contain the x times value required,
 * i: number of column incrementation due to n value,
 * j: number of # for the square creation,
 * Return: zero
*/

void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}

	else
	{
		int i;
		int j;

		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				_putchar('#');
			}

			_putchar('\n');
		}
	}
}
