#include "main.h"

/**
 * _abs - computes the absolute value of an integer,
 * @n: var who's containing all test inputs in 6-main.c file,
 * Return: n if the results are greater or equal to 0,
 * or add "-" if the result is negative.
*/


int _abs(int n)
{

	if (n >= 0)
	{
		return (n);
	}

	else
	{
		return (-n);
	}

	return (0);
}
