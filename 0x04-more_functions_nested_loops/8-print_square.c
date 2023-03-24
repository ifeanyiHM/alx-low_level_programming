#include "main.h"

/**
* print_square - print square using #
* @size: parameter
* Return: return empty
*/

void print_square(int size)
{

		int n, j;

		for (n = 0; n < size; n++)
		{
			_putchar('\n');
			for (j = 0; j < size; j++)
			{
				_putchar('#');
			}
		}
	if (size == 0)
	{
		_putchar('\n');
	}
}
