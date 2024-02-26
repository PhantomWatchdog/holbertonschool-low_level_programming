#include "main.h"

/**
 * _isdigit - check each character for control his lower state or not.
 * @c: is the character to check, here between 0 and 9§.
 * Return: 1 if lowercase or 0 if not.
*/

int _isdigit(int c)
{
	return (c >= '0' && c <= '9');
}
