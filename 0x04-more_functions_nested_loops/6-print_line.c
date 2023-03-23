#include "main.h"

/**
* print_line - prints a straight line in the terminal
* @n: parameter
* Return: return empty
*/

void print_line(int n)
{
	int x;

	for (x = 0; x <= n; x++)
	{
		if (n <= 0)
		{
			_putchar('\n');
		}
		else
		{
			_putchar(95);
		}
	}
}
