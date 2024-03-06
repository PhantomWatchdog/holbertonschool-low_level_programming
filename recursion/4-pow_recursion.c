#include "main.h"

/**
 * _pow_recursion - return the base value raised by power,
 * @x: base number to raise,
 * @y: exponent for calcul the raised value,
 *
 * Return: result.
 */

int _pow_recursion(int x, int y)
{
	int i;
	int result = 1;

	for (i = 0; i < y; i++)
	{
		result *= x;

	}

	if (y < 0)
	{
		return (-1);
	}

	return (result);
}
