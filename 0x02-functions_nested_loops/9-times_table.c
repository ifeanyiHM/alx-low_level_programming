#include "main.h"

/**
* times_table -> It prints the 9 times table
* Return: returns 0
*/

void times_table(void)
{
	int i, j;
	for (i = 48; i <= 57; i++)
	{

	_putchar('\n');

	for (j = 48; j <= 57; j++)
	{
		if ((i * j) <= 57)
		{
			_putchar(32);
			_putchar(32);
		}
		else
		{
			_putchar(32);
		}

		_putchar((i * j));
		if (j < 57)
		{
			_putchar(44);
		}
	}
	}
	_putchar('\n');
}
