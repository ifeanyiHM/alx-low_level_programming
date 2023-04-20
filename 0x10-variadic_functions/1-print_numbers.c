#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>

/**
* print_numbers - A function that prints numbers
* @separator: parameter 1
* @n: parameter 2
* Return: return empty
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list ap;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ap, unsigned int));

		if (i != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");

	va_end(ap);
}
