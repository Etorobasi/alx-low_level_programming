#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - prints numbers to stdout
 * @separator: string constant
 * @n: number of integers
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i, arr;

	va_list print;

	va_start(print, n);
	for (i = 0; i < n; i++)
	{
		arr = va_arg(print, const unsigned int);
		printf("%d", arr);
		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
}
