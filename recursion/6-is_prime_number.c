#include "main.h"

int composite(int number, int div);
int is_prime_number(int n);

/**
 * composite - check for composite number(divisible by more than 2 divider.
 * @number: The number to check.
 * @div: divider.
 *
 * Return: If number is divisible - 0.
 *         If number is not divisible - -1.
 */

int composite(int number, int div)
{
	if (number % div == 0)
	{
		return (0);
	}

	if (div == number / 2)
	{
		return (1);
	}

	return (composite(number, div + 1));
}

/**
 * is_prime_number - Check if n is prime.
 * @n: The number to check.
 *
 * Return: If n is prime - -1.
 *         If n is not prime - 0.
 */

int is_prime_number(int n)
{
	int div = 2;

	if (n <= 1)
	{
		return (0);
	}

	if (n >= 2 && n <= 3)
	{
		return (1);
	}

	return (composite(n, div));
}
