#include "main.h"

/**
 * print_sign - with a while loop prints the operators +, - or 0,
 * in the cases n is greater, less or equal to 0,
 * @n: var who's containing all test inputs in 5-main.c file,
 * Return: 1 and print + if greater than zero, 0 if zero,
 * -1 and - if less than zero.
*/


int print_sign(int n)
{

	if (n > 0)
	{
		_putchar('+');
		return ((1));
	}

	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}

	else
	{
		_putchar('-');
		return (1);
	}

	return (0);
}
