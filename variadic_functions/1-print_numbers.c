#include "variadic_functions.h"

/**
 *print_numbers - Print numbers.
 *@separator: String to print between each number.
 *@n: Number of args to print.
 *Return: Sum of args.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int index;

	/* Initialize the args list */
	va_start(args, n);

	/* Loop through args and print them */
	for (index = 0; index < n; index++)
	{
		/* Print each number */
		printf("%d", va_arg(args, int));

		/* Print the separator if not NULL or last number */
		if (separator != NULL && index < n - 1)
		{
			printf("%s", separator);
		}
	}

	/* End of use for list args */
	va_end(args);

	printf("\n");
}
