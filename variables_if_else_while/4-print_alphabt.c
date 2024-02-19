#include <stdio.h>

/**
 * main - prints the alphabet in lowercase except q et e letters
 * Return: zero
*/

int main(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		if (alpha != 'q' && alpha != 'e')
		{
			putchar(alpha);
		}
	}

	putchar('\n');

	return (0);
}
