#include "variadic_functions.h"

/**
 * print_char - Prints a char.
 *@arg: Arguments to prints.
 *Return: letter.
 */

void print_char(va_list arg)
{
	/* Stock the char */
	char letter;

	/* Extract the char from list */
	letter = va_arg(arg, int);
	printf("%c", letter);
}

/**
 * print_int - Prints a integer.
 *@arg: Arguments to prints.
 *Return: num.
 */

void print_int(va_list arg)
{
	int num;

	num = va_arg(arg, int);
	printf("%d", num);
}

/**
 * print_float - Prints a float.
 *@arg: Arguments to prints.
 *Return: num.
 */

void print_float(va_list arg)
{
	float num;

	num = va_arg(arg, double);
	printf("%f", num);
}

/**
 * print_string - Prints a string.
 *@arg: Arguments to prints.
 *Return: str.
 */

void print_string(va_list arg)
{
	char *str;

	str = va_arg(arg, char *);
	if (str == NULL)
		printf("(nil)");
	else
		printf("%s", str);
}

/**
 * print_all - Prints all arguments.
 *@format: A string of chars.
 *Return: args.
 */

void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0;
	char *separator = "";

	va_start(args, format);

	/* Check each arg in format and print it */
	while (format && format[i])
	{
		if (format[i] == 'c')
		{
			printf("%s", separator);
			print_char(args);
		}
		else if (format[i] == 'i')
		{
			printf("%s", separator);
			print_int(args);
		}
		else if (format[i] == 'f')
		{
			printf("%s", separator);
			print_float(args);
		}
		else if (format[i] == 's')
		{
			printf("%s", separator);
			print_string(args);
		}

		separator = ", ";
		i++;
	}

	va_end(args);
	printf("\n");
}
