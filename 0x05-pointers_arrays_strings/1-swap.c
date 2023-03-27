#include "main.h"

/**
* swap_int - A function that swaps the values of two integers.
* @a: parameter
* @b: parameter
* Return: empty
*/

void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
