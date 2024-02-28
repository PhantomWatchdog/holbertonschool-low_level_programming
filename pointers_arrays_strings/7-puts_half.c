#include "main.h"

/**
 * puts_half - function cuting in 2 parts *str,
 * @str: contain the char*,
 * display the str second half,
 * index: identify the array index,
 * length: count the array length,
 * srt: sort the chars for prepare the display by _putchar,
 * Return: Always 0.
 */

void puts_half(char *str)
{
	int index = 0;
	int length = 0;
	int srt;

	while (str[index++])
		length++;

	if ((length % 2) == 0)
		srt = length / 2;

	else
		srt = (length + 1) / 2;

	for (index = srt; index < length; index++)
		_putchar(str[index]);

	_putchar('\n');
}
