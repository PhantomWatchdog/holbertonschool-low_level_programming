#include <stdio.h>

/**
 * main - prints the alphabet in lowercase
 * Return: zero
*/

int main(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		putchar(alpha);

	}

	putchar('\n');

	return (0);
}
