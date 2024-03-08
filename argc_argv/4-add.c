#include <stdio.h>
#include <stdlib.h>

/**
 * main - Check all arguments as digits and do an addition if true.
 * @argc: The number of arguments in argv array.
 * @argv: The array containing all arguments.
 * Return:
 * If all num are digits - sum.
 * If one or more are not - Error.
 */

int main(int argc, char *argv[])
{

	int sum = 0;
	int digit = 0;
	int num;

	for (num = 1; num < argc; num++)
	{
		for (digit = 0; argv[num][digit]; digit++)
		{
/*
 * Digit check if num is a digit with ascii table.
 * All result < 0 && > 9 is not considered as digit.
 */

			if (argv[num][digit] < '0' || argv[num][digit] > '9')
			{
				printf("Error\n");
					return (1);
			}
		}

		sum += atoi(argv[num]);
	}

	printf("%d\n", sum);

	return (0);
}
