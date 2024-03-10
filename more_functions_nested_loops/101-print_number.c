#include "main.h"

/**
 * print_number - Prints an integer defined in n.
 *@n: Parameter to print.
 * Return:
 * If positive - n.
 * If negative - -n.
 */

void print_number(int n)
{
	int num = n;

	if (n < 0)
	{
		/* invert the sign of negative num from n (n * -1)*/
		_putchar('-');
		num = -num;
	}

	if ((num / 10) > 0)
	{
		print_number(num / 10);
	}

	_putchar((num % 10) + '0');
}
