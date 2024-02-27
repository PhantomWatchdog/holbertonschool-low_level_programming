#include "main.h"

/**
 * reset_to_98 - function replacing the value of pointer n,
 * @n: is the function parameter,
 * p: contain the value to export to n,
 * Return: Always 0.
 */

void reset_to_98(int *n)
{
	int p;

	p  = 98;
	*n = p;
}
