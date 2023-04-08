#include "main.h"
#include <string.h>

/**
* *_strncpy - A function that copies a string
* @dest: parameter 1
* @src: parameter 2
* @n: parameter 3
* Return: return strncpy
*/

char *_strncpy(char *dest, char *src, int n)
{
	return (strncpy(dest, src, n));
}
