#include "main.h"

/**
 * print_chessboard - display the chessboard acording to *a,
 * @a: pointer to board,
 * Return: each char from chessboard.
 */

void print_chessboard(char (*a)[8])
{
	int index, jndex;
/* loop moving pointer in a[], index (row), jndex (column) */
	for (index = 0; a[index][7]; index++)
	{
		for (jndex = 0; jndex < 8; jndex++)
		{
			_putchar(a[index][jndex]);
		}

		_putchar('\n');
	}

}
