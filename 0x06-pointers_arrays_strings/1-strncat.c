#include "main.h"
#include <string.h>

/**
* _strncat - A function that concatenate two strings;
* @dest: parameter 1
* @src: parameter 2
* @n: parameter 3
* Return: return concatenation
*/

char *_strncat(char *dest, char *src, int n)
{
	return (strncat(dest, src, n));
}
