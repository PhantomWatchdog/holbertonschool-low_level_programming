#include "variadic_functions.h"

/**
 * print_strings - Print strings only.
 *@separator: Char to print between each string.
 *@n: Number of args to print.
 *Return: Strings contained in va_list.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int index;
	char *str;

	va_start(args, n);

	for (index = 0; index < n; index++)
	{
		str = va_arg(args, char *);

		if (str != NULL)
		{
			printf("%s", str);
		}
		else
		{
			printf("(nil)");
		}

		if (separator != NULL && index < n - 1)
		{
			printf("%s", separator);
		}
	}

	va_end(args);

	printf("\n");
}
