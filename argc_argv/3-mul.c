#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers.
 * @argc: The number of arguments in argv array.
 * @argv: The array containing all arguments.
 * Return: Always return result.
 */

int main(int argc, char *argv[])
{
	int number;
	int number1;
	int result;

/* check if enough args are declared, if less or more than 3 print Error */
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

/* use atoi for convert argv in int */
	number = atoi(argv[1]);
	number1 = atoi(argv[2]);
	result = number * number1;

	printf("%d\n", result);

	return (0);
}
