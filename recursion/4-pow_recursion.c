#include "main.h"

/**
 * _pow_recursion - return the base value raised by power,
 * @base: base number to raise,
 * @power: exponent for calcul the raised value,
 *
 * Return: result.
 */

int _pow_recursion(int base, int power)
{
	int i;
	int result = 1;

	for (i = 0; i < power; i++)
	{
		result *= base;

	}

	if (power < 0)
	{
		return (-1);
	}

	return (result);
}
