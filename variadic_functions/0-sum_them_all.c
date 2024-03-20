#include "variadic_functions.h"

/**
 * sum_them_all - Print the sum of all args.
 * @n: Number of arguments.
 * Return:
 * If n == 0;
 * Else - Args Sum.
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int sum = 0, index;

	/* Initialize the args list */
	va_start(args, n);

	if (n == 0)
	{
		return (0);
	}

	/* Take all args from list and sum there */
	for (index = 0; index < n; index++)
	{
		sum += va_arg(args, int);
	}

	/* End of use for list args */
	va_end(args);

	return (sum);
}
