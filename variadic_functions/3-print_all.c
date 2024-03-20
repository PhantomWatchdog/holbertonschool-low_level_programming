#include "variadic_functions.h"

/**
 * print_char - Prints a char.
 *@args: Arguments to prints.
 *Return: arg.
 */

void print_char(va_list args)
{

	printf("%c", va_arg(args, int));
}

/**
 * print_int - Prints a integer.
 *@args: Arguments to prints.
 *Return: arg.
 */

void print_int(va_list args)
{
	printf("%d", va_arg(args, int));
}

/**
 * print_float - Prints a float.
 *@args: Arguments to prints.
 *Return: arg.
 */

void print_float(va_list args)
{
	printf("%f", va_arg(args, double));
}

/**
 * print_string - Prints a string.
 *@args: Arguments to prints.
 *Return: str.
 */

void print_string(va_list args)
{
	char *str;

	str = va_arg(args, char *);

	if (str == NULL)
	{
		printf("(nil)");
		return;
	}

	printf("%s", str);
}

/**
 * print_all - Prints all arguments.
 *@format: List of args types.
 *Return: args.
 */

void print_all(const char * const format, ...)
{
	va_list args;
	int i, j;
	char *separator = "";

	/* Use an struct for find respective type and f() */
	print_type f[] = {
		{'c', print_char},
		{'i', print_int},
		{'f', print_float},
		{'s', print_string},
		{'\0', NULL}
	};

	/* Init args list */
	va_start(args, format);

	j = 0;

	/* Check each arg in format and print it */
	while (format != NULL && format[j] != '\0')
	{
		i = 0;
		/* Search the type for each arg */
		while (f[i].letter != '\0')
		{
			/* Check if type is matching */
			if (f[i].letter == format[j])
			{
				printf("%s", separator);
				f[i].print(args);
				separator = ", ";
			}
			/* Move on types */
			i++;
		}
		/* Move on chars */
		j++;
	}
	va_end(args);
	printf("\n");
}
