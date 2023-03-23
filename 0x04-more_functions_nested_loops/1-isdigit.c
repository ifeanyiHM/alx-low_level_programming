#include "main.h"

/**
* _isdigit - checks if parameter is a digit
* @c: parameter
* Return: either 0 or 1
*/

int _isdigit(int c)
{
	return (!(c >= 'a' && c <= 'z') || !(c >= 'A' && 'Z'));
}
