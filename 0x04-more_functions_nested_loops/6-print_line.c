#include "main.h"

/**
* print_line - prints a straight line in the terminal
* @n: parameter
*/

void print_line(int n)
{
	int x;

	for (x = 0; x <= n; x++)
	{
		_putchar(95);
		if (n == 0)
		{
			_putchar('\n');
		}
	}
}