#include "main.h"

/**
 * set_bit - Set bit value to 1 for specified index.
 * @n: The bit.
 * @index: The target index to reach.
 * Return: The updated value.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	/*XOR operation comparing two bits*/
	*n ^= (1 << index);
	return (1);
}
