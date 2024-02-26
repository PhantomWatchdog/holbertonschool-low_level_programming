#include <stdio.h>
#include "main.h"

/**
 * main - prints the digit number from 0 to 100,
 * followed by a '\n',
 * for each multiples of 3 display Fizz,
 * multiples of 5 must display Buzz,
 * and for multiples of 3 and 5 display FizzBuzz,
 * Return: zero
*/

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 != 0)
		{
			printf(" Fizz");
		}

		else if (i % 5 == 0 && i % 3 != 0)
		{
			printf(" Buzz");
		}

		else if (i % 3 == 0 && i % 5 == 0)
		{
			printf(" FizzBuzz");
		}

		else if (i == 1)
		{
			printf("%d", i);
		}

		else
		{
			printf(" %d", i);
		}
	}

	printf("\n");
	return (0);

}
