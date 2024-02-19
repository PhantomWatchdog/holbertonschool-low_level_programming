#include <stdio.h>

/**
 * main - prints the digit number from 0 to 9
 * Return: zero
*/

int main(void)
{
	int num;

	for (num = '0'; num <= '9'; num++)
	{
		putchar(num);
	}

	putchar('\n');

	return (0);
}
