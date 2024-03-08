#include <stdio.h>

/**
 * main - Print all arguments it reveive.
 * @argc: The number of arguments in argv array.
 * @argv: The array containing all arguments.
 * Return: Always return arguments name.
 */

int main(int argc, char *argv[])
{
	int i;

	printf("%s\n", argv[0]);

/* argv[0] is program name, so args count start from 1 */
	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			printf("%s\n", argv[i]);
		}
	}

	return (0);
}
