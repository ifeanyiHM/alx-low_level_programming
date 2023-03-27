#include "main.h"

/**
* print_rev - A function that prints a string in reverse
* @s: parameter
* Return: return empty
*/

void print_rev(char *s)
{

	if (*s != '\0')
	{
		print_rev(s + 1);
		_putchar(*s);
	}
}
