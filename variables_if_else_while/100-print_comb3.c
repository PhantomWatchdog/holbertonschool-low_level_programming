#include <stdio.h>

/**
 * main - prints two digits from 0 to 9 separated by ' ' and ','
 * and displaying all digits combinations
 * Return: zero
*/

int main(void)
{
	int num1;
	int num2;

	for (num1 = 0; num1 <= 8; num1++)
	{
		for (num2 = num1 + 1; num2 <= 9; num2++)

		{
			putchar(num1 + '0');
			putchar(num2 + '0');

			if (!(num1 == 8 && num2 == 9))
			{
				putchar(',');
				putchar(' ');
			}

		}
	}

putchar('\n');
return (0);

}
