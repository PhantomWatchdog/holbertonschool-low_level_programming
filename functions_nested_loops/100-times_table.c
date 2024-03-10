#include "main.h"
#include <stdio.h>

/**
 * print_times_table - for a determined value,
 * display the result in order until specified limit,
 * @n: is the var who contain the value,
 * don't display results if n is greater than 15 or less than 0,
 * Return: zero
*/

void print_times_table(int n)
{
	int num, mult, prod;

	if (n >= 0 && n <= 15)
	{
		for (num = 0; num <= n; num++)
		{
			_putchar('0');

			for (mult = 1; mult <= n; mult++)
			{
				_putchar(',');
				_putchar(' ');

				prod = num * mult;

				if (prod <= 99)
					_putchar(' ');

				if (prod <= 9)
					_putchar(' ');

				if (prod >= 100)
				{
					/* Print the hundreds + tens + units */
					_putchar(prod / 100 + '0');
					_putchar(prod / 10 % 10 + '0');
				}

				else if (prod <= 99 && prod >= 10)
				{
					_putchar(prod / 10 + '0');
				}

				_putchar(prod % 10 + '0');
			}

			_putchar('\n');
		}
	}
}
