#include <stdio.h>

/**
 * main - prints the digit number from 0 to 9 separated by ','
 * and displaying single-digit numbers
 * Return: zero
*/

int main(void)
{
	int num;

	for (num = '0'; num <= '9'; num++)
	{
		putchar(num);

		if (num != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
