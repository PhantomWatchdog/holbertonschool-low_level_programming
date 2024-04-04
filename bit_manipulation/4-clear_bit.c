#include "main.h"

/**
 * clear_bit - Set bit value to 0 at choosen index.
 * @n: The number to set.
 * @index: Value index of number to set.
 * Return: 1 if set succeed or -1 if error detected.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	/*NOT operation followed by AND op setting bits to 0*/
	*n &= ~(1 << index);
	return (1);
}
