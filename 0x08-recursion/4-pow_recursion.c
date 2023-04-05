#include "main.h"
#include <math.h>
#include <stdio.h>

/**
* _pow_recursion - A function that returns the
* value of x raised to the power of y
* @x: paremeter 1
* @y: parameter 2
* Return: return empty
*/

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
