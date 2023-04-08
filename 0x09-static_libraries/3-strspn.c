#include "main.h"
#include <string.h>

/**
* _strspn - A function
* @s: parameter
* @accept: parameter
* Return: empty
*/

unsigned int _strspn(char *s, char *accept)
{
	return (strspn(s, accept));
}
