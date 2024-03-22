#include <stdio.h>
#include <stdlib.h>

/**
 * main - Print main opcodes.
 * @argc: Number of args.
 * @argv: Value of args.
 * Return: Opcodes.
 */

int main(int argc, char *argv[])
{
	int nbytes, index;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	nbytes = atoi(argv[1]);

	if (nbytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	printf("%02x\n", nbytes);

	return (0);
}
