#include "main.h"

/**
* print_triangle - prints a triangle
* @size: parameter
* Return: returns empty
*/

void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int n, k, j;

		for (n = 0; n < size; n++)
		for (k = size - n; k > 1; k--)
		{
		{
			_putchar('\n');

			for (j = 0; j <= n; j++)
			{
				_putchar('#');
			}
		}
		}
		_putchar('\n');
	}
}
