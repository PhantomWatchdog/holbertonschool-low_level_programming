#include <stdio.h>

/**
 * main - prints the digit number from 0 to 9
 * with in addition letters from 'a' to 'f'
 * Return: zero
*/

int main(void)
{
	int num;
	char alpha;

	for (num = '0'; num <= '9'; num++)
	{
		putchar(num);
	}

	for (alpha = 'a'; alpha <= 'f'; alpha++)
	{
		putchar(alpha);
	}

	putchar('\n');

	return (0);
}
