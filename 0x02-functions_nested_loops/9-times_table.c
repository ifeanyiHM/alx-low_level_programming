#include "main.h"

/**
* times_table -> It prints the 9 times table
* Return: returns 0
*/

void times_table(void)
{
	int i, j;
	for (i = 0; i <= 9; i++)
	{

	_putchar('\n');

	for (j = 0; j <= 9; j++)
	{

		_putchar((i * j));
		if (j < 9)
		{
			_putchar(',');
		}
	}
	}
	_putchar('\n');
}
