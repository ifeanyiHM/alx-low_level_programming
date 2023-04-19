#include "function_pointers.h"
#include <stdio.h>

/**
* array_iterator - A function that executes a function given as a parameter
* @array: parameter 1
* @size: parameter 2
* @action: function pointer
* Return: return empty
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
	{
		return;
	}

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
