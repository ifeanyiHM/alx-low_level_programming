#include "main.h"

/**
* more_numbers - prints 10 times form 0 to 14
* Return: 0
*/

void more_numbers(void)
{
	int i;
	int j = 0;

	for (i = 0; i <= 10; i++)
	{
		_putchar('\n');

		for (; j <= 14; j++)
		{
			_putchar(j + '0');
		}
	}
	_putchar('\n');
}
