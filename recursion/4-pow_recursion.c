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
	int result = x;

/* if y is negative (negative exponent) return -1 */
	if (y < 0)
	{
		return (-1);
	}

/* if y true (exponent 0) return 1 */
	else if (y == 0)
	{
		return (1);
	}

/* call recursive function (exponent y - 1), reducing y by 1 until reach 0 */
	result *= _pow_recursion(x, y - 1);

	return (result);
}
