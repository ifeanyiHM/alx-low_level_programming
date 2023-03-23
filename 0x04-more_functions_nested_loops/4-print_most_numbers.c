#include "main.h"

/**
* print_most_numbers - print numbers form 0 to 9 except 2 and 4
* Return: 0
*/

void print_most_numbers(void)
{
	int n;

	while (n <= 9)
	{
		_putchar(n);
		n++;
		if (n == 2 || n == 4)
		{
			continue;
		}
	}
}
