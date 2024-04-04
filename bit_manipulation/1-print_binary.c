#include "main.h"

/**
 * print_binary - Print the binary value of a decimal number.
 * @n: Number to print.
 * Return: The binary representation.
 */

void print_binary(unsigned long int n)
{
	if (n > 1)
	{
		print_binary(n >> 1);
	}

	_putchar((n & 1) ? '1' : '0');
}
