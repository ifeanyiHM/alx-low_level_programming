#include "main.h"

/**
* times_table -> It prints the 9 times table
* Return: returns 0
*/

void times_table(void)
{
	int i, j;
	for (i = '0'; i <= '9'; i++)
	{

	_putchar('\n');

	for (j = '0'; j <='9'; j++)
	{
		if ((i * j) <= '9')
		{
			_putchar(32);
			_putchar(32);
		}
		else
		{
			_putchar(32);
		}

		_putchar((i * j));
		if (j < '9')
		{
			_putchar(44);
		}
	}
	}
	_putchar('\n');
}
