#include "main.h"

/**
 * get_bit - Return the bit value from specified index.
 * @n: The bit to return.
 * @index: The target index to reach.
 * Return: Bit value.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	/*Check if index greater or equal to number of bit*/
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	/*Shift bits on right by index value, extract the bit*/
	return ((n >> index) & 1);
}
