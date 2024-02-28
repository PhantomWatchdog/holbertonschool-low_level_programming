#include "main.h"

/**
 * rev_string - function used for swap value of s,
 * @s: contain the char*,
 * start: first var used for the swap ,
 * end: second var used for the swap,
 * first loop move pointer until last char of *s \0,
 * with one decrementation to char before \0,
 * the second move pointer until first char of *s \0,
 * in reverse, decrement to char after 'M',
 * Return: zero.
 */

void rev_string(char *s)
{
	char *start = s;
	char *end = s;

	while (*end != '\0')
	{
		end++;
	}

	end--;

	while (start < end)
	{
		char temp = *start;
		*start = *end;
		*end = temp;
		start++;
		end--;
	}
}
