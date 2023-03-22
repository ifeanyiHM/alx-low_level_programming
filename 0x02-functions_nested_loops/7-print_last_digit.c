#include "main.h"

/**
* print_last_digit -> Prints the last digit of a number.
* @n: character passed
* Return: returns the last digit.
*/

int print_last_digit(int n)
{
	if (n < 0)
	n = -n;
	return (n % 10);
}
