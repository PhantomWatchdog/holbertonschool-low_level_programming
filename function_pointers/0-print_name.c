#include "function_pointers.h"

/**
 * print_name - Print name with an function pointer.
 * @name: Content to print.
 * @f: Function pointer used for cast a object.
 * Return:
 * If f == NULL - NULL.
 * Else - name.
 */

void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
	{
		return;
	}
	else
	{
		f(name);
	}
}
