#include "3-calc.h"

/**
 * main - Centralized program functions.
 * @argc: Number of arguments.
 * @argv: Value of arguments.
 * Return:
 * If args != 4 - Error 98.
 * If op == NULL - Error 99.
 * If Div and mod by 0 - Error 100.
 * Else - Result of calcul.
 */

int main(int __attribute__((unused)) argc, char *argv[])
{
	int num1, num2;
	char *op;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	op = argv[2];
	num2 = atoi(argv[3]);

	if (get_op_func(op) == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	if ((*op == '/' && num2 == 0) || (*op == '%' && num2 == 0))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", get_op_func(op)(num1, num2));

	return (0);
}
