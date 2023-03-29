#include "main.h"

/**
* reverse_array - A function that reverses the content of an array of integers
* @a: parameter 1
* @n: parameter 2
* Return: return empty
*/

void reverse_array(int *a, int n)
{
	int i;
	int t;

	for (i = 0; i < n--; i++)
	{
		t = a[i];
		a[i] = a[n];
		a[n] = t;
	}
}
