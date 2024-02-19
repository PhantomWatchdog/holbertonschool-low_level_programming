#include <stdio.h>

/**
 * main - prints the alphabet in lowercase and uppercase
 * Return: zero
*/

int main(void)
{
	char Lower;
	char Upper;

	for (Lower = 'a'; Lower <= 'z'; Lower++)
	{
		putchar(Lower);
	}

	for (Upper = 'A'; Upper <= 'Z'; Upper++)
	{
		putchar(Upper);
	}

	putchar('\n');

	return (0);
}
