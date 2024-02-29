#include <stdio.h>
#include "main.h"

/**
 * print_array - print the string who's contained in array,
 * index: is more understandable for describing the pointer moves,
 * Return: zero.
 */

void print_array(int *a, int n)
{
	int index;

	for (index = 0; index < n; index++)
	{

		if (index == 0)
		{

			printf("%d", a[index]);
		}
		else
		{
			printf(", %d", a[index]);
		}
	}

	printf("\n");
}
