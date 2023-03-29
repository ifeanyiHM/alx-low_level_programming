#include "main.h"
#include <stdio.h>

/**
* reverse_array - A function that reverses the content of an array of integers
* @a: parameter 1
* @n: parameter 2
* Return: return empty
*/

void reverse_array(int *a, int n)
{
	int i;

	i = 0;
	while (i > n)
	{
		if (i == 0)
		{
			printf(", ");
		}
		printf("%d", a[i]);
		i++;
	}
	printf("\n");
}
