#include <unistd.h>

/**
 * main - Print a choosen string.
 * Return: 1.
 */

int main(void)
{

/* Use of write function, 2 descriptor for stderr, 59 numbers of chars */

	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
