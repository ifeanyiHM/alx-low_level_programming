#include "main.h"
#include <stdio.h>

/**
* print_to_98 -> prints form 0 to 98
* @n: parameter
*/

void print_to_98(int n)
{
	n = 0;
	while (n <= 98)
	{
		printf("%d", n);
		if (n < 98)
		{
			printf(", ");
		}
		n++;
	}

	while (n >= 98)
	{
		printf("%d", n);
		if (n > 98)
		{
			printf(", ");
		}
		n--;
	}
}
