#ifndef VAR_FUNC_H
#define VAR_FUNC_H

#include <stdarg.h>
#include <stdio.h>

typedef struct type
{
	char letter;
	void (*print)(va_list args);
} print_type;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
