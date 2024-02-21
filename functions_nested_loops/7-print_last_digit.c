#include "main.h"

/**
* print_last_digit - print the last digit of tested numbers,
* @n: store the number for test,
* o: store the conversion result, tha last digit,
* Return: result
*/

int print_last_digit(int n)
{
	int o;

	if (n < 0)
	{
		n = -n;
	}

	o = n % 10;

	if (o < 0)
	{
		o = -o;
	}

	_putchar(o + '0');

	return (o);

}
