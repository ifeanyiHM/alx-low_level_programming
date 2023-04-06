#include "main.h"

/**
* is_prime_number - A functions that returns a prime number
* @n: parameter
* Return: return empty
*/

int is_prime_number(int n)
{
	if (n % (n < n - 1) == 0)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
