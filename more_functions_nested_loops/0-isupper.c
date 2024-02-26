#include "main.h"

/**
 * _isupper - check each character for control his lower state or not.
 * @c: is the character to check, here between a and z.
 * Return: 1 if lowercase or 0 if not.
*/

int _isupper(int c)
{
	return(c >= 'A' && c <= 'Z');
}
