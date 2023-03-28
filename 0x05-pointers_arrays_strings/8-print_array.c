#include "main.h"
#include <stdio.h>

/**
* print_array - A function that prints element of an array of integers.
* @a: parameter 
* @n: parameter
* Return: return empty
*/

void print_array(int *a, int n)
{
	int j;
	for (j = 0; j < n; j++)
	{
		printf("%d", a[j]);
		if (j != (n -1))
		{
			printf(", ");
		}
	}
	printf("\n");
}
