#include <stdio.h>

/**
 * main - Print the program name.
 * @argc: The number of arguments in argv array.
 * @argv: The array containing all arguments.
 * Return: Always return program name  contained in argv[0].
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("Program name : %s\n", argv[0]);
	return (0);
}
