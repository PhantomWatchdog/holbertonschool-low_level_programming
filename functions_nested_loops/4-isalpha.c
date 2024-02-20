#include "main.h"

/**
 * _isalpha - check each character for control his lower or upper state.
 * @c: is the character to check, here in lower and upper.
 * Return: 1 if lowercase, Upper or 0 if not.
*/

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
