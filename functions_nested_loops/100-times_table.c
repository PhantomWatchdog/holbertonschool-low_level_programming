#include "main.h"
#include <stdio.h>

/**
 * print_times_table - for a determined value,
 * display the result in order until specified limit,
 * @n: is the var who contain the value,
 * with a new line at each start,
 * don't display results if n is greater than 15 or less than 0,
 * Return: zero
*/

void print_times_table(int n)
{
	if (n >= 0 && n <= 15)
	{
		int num1, num2;

		for (num1 = 0; num1 <= n; num1++)
		{
			for (num2 = 0; num2 <= n; num2++)
			{

				printf("%-4d", num1 * num2);
			}

			printf("\n");

		}
	}

}
