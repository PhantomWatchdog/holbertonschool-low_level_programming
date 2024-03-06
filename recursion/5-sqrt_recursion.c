#include "main.h"

int estimate_sqrt(int target, int root);
int _sqrt_recursion(int n);

/**
 * estimate_sqrt - Estimate natural square root of target.
 * @target: The square root to find.
 * @root: Root to be tested.
 *
 * Return: If target has natural square root - the square root.
 *         If target have not natural square root - -1.
 */
int estimate_sqrt(int target, int root)
{
	if ((root * root) == target)
	{
		return (root);
	}

	if (root == target / 2)
	{
		return (-1);
	}

	return (estimate_sqrt(target, root + 1));
}

/**
 * _sqrt_recursion - Returns natural square root of n.
 * @n: The number to return the square root of.
 *
 * Return: If n has natural square root - the natural square root of n.
 *         If n  have not natural square root - -1.
 */

int _sqrt_recursion(int n)
{
	int root = 0;

	if (n < 0)
	{
		return (-1);
	}

	if (n == 1)
	{
		return (1);
	}

	return (estimate_sqrt(n, root));
}
