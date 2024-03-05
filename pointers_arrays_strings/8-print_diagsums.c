#include "main.h"
#include "stdio.h"

/**
 * print_diagsums - print standard et reversed diagonal,
 * @a: pointer for array,
 * @size: size of array (row and column),
 * sum: calcul the sum for standard diagonal,
 * sum1: calcul the sum fore reversed diagonal,
 * i try to find the most optimize code,
 * Return: sums.
 */

void print_diagsums(int *a, int size)
{
	int index;
	int sum = 0;
	int sum1 = 0;


	for (index = 0; index < size; index++)
	{
		sum += a[index + index * size];
		sum1 += a[(size - 1 - index) + index * size];
	}

	printf("%d, %d\n", sum, sum1);
}
