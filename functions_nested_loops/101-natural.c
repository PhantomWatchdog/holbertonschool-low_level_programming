#include <stdio.h>

/**
 * main - Print the sum of all multiples for 3 and 5.
 *
 * Return: Sum.
 */

int main(void)
{
	int sum = 0;
	int i;

	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum += i;
		}
	}

	printf("%d\n", sum);
}
