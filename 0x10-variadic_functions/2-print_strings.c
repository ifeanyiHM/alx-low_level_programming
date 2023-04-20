#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
* print_strings - A function that prints strings.
* @separator: parameter 1
* @n: parameter 2
* Return: return empty
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;
	va_list ap;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(ap, char *);

		if (str == NULL)
			printf("(nil)");
		printf("%s", str);

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");

	va_end(ap);
}
