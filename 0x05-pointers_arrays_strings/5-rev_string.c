#include "main.h"

/**
* rev_string - A function that reverses a string
* @s: parameter
* Return: return empty
*/

void rev_string(char *s)
{
	if (*s != '\0')
	{
		rev_string(s + 1);
		_putchar(*s);
	}
}
