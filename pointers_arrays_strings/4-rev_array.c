#include "main.h"

/**
 * reverse_array - reverse the content of an array,
 * @a: parameter containing the array of integers,
 * @n: number of elements to swap,
 * Return: zero.
 */

/* function declaration with 1 pointer, 2 parameters (*a, n) */
void reverse_array(int *a, int n)
{

/* define pointers for start and end of array */
	int *start = a;
	int *end = a + n - 1;

/* move the pointer from start to end swaping the elements */
	while (start < end)
	{
		int temp = *start;
		*start = *end;
		*end = temp;
		start++;
		end--;
	}
}
