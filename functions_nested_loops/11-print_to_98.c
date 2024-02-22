#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - for a determined value,
 * display the result in order until 98,
 * separated by ',' and ' ',
 * @n: is the var who contain the value,
 * with a new line at each start,
 * Return: zero
*/

void print_to_98(int n)
{

	if (n <= 98)
	{
		while (n < 98)
		{
			printf("%d, ", n++);
		}
		printf("%d\n", n);
	}

	else
	{
		while (n > 98)
		{
			printf("%d, ", n--);
		}
		printf("%d\n", n);
	}

}
