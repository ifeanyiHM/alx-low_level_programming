#include "main.h"

/**
* factorial - A function that prints the factorial of a given number.
* @n: parameter
* Return: return empty
*/

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
