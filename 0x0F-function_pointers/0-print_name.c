#include "function_pointers.h"
#include <stdio.h>

/**
* print_name - A function that prints a name.
* @name: parameter 1
* @f: pointer function
* Return: return empty
*/

void print_name(char *name, void(*f)(char *))
{
	if (name == NULL || f == NULL)
	{
		return;
	}
	f(name);
}
