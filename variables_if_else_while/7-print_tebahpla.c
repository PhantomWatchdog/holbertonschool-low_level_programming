#include <stdio.h>

/**
 * main - prints the alphabet in lowercase with a reverse order
 * Return: zero
*/

int main(void)
{
	char alpha;

	for (alpha = 'z'; alpha >= 'a'; alpha--)
	{
		putchar(alpha);
	}

	putchar('\n');

	return (0);
}
