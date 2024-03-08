#include <stdio.h>

/**
 * main - Print the program name.
 * @argc: The number of arguments in argv array.
 * @argv: The array containing all arguments.
 * Return: Always return number of arguments.
 */

int main(int argc, char __attribute__((unused)) *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
