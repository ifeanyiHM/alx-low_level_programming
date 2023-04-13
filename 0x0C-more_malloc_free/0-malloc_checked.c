#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
* malloc_checked - A function that allocates mermory using malloc
* @b: parameter
* Return: return empty
*/

void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);

	if (p == NULL)
	{
		exit(98);
	}
	return (p);
}
