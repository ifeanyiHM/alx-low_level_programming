#include "function_pointers.h"
#include <stdio.h>

/**
* int_index - A function that searches for an integer.
* @array: parameter 1
* @size: parameter 2
* @cmp: function pointer
* Return: return empty
*/

int int_index(int *array, int size, int(*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
		{
			return (i);
		}
	}
	return (-1);
}
