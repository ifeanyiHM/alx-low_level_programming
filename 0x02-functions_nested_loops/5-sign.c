#include "main.h"

/**
* print_sign -> print if n is greater than 0 or not
* @n: the character for check.
* Return: returns 1 or 0 or -1
*/

int print_sign(int n)
{
	if (n > 0)

	{
		_putchar('+');
		return (1);
	}

	if (n == 0)

	{
		_putchar('0');
		return (0);
	}

	if (n < 0)

	{
		_putchar('-');
		return (-1);
	}

	return (0);
}
