#include "main.h"
#include <stddef.h>
#include <string.h>

/**
* *_memcpy - A function that fills memory with a constant byte
* @dest: parameter 1
* @src: parameter 2
* @n: parameter 3
* Return: return empty
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	void *memcpy(void *dest, const void *src, size_t n);
	return (memcpy(dest, src, n));
}
