#include "main.h"

/**
 * flip_bits - Flip the number of bits from a specified number.
 * @n: The number A.
 * @m: The number B.
 * Return: The number of bits to flip.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_result = n ^ m;
	unsigned int count = 0;

	while (xor_result)
	{
		/*Check the least significant bit*/
		count += xor_result & 1;
		/*Right shift for check next bit*/
		xor_result >>= 1;
	}

	return (count);
}
