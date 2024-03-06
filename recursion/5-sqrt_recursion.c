#include "main.h"

/**
 * _sqrt_recursion - return the natural square root of number,
 * @n: number to check,
 * Return: n || i || -1.
 */

int _sqrt_recursion(int n)
{
	int i = 0;
	int result;

/* if n is negative, n isn't natural root number */
	if (n < 0)
		return (n);

/* if n is 0 || 1, square root is n */
	if (n == 0 || n == 1)
		return (n);

	for (i = 1; i * i <= n; i++)
	{
		result = i * i;

/* if i * i = n, the square root number of n is found */
		if (result == n)
		{
			return (i);
		}
	}

	return (-1);
}
