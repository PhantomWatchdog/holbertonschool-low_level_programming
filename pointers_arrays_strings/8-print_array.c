#include <stdio.h>
#include "main.h"

/**
 * print_array - print the string who's contained in array,
 * @a: pointing to a value (string in an array),
 * @n: contain the parameter deciding how many elements,
 * will be displayed,
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
