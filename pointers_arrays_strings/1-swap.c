#include "main.h"
#include <stdio.h>

/**
 * swap_int - function used for swap value of two integers,
 * @a: first integer,
 * @b: second integer,
 * Return: zero.
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
