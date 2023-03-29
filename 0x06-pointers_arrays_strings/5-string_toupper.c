#include "main.h"
#include <string.h>
#include <ctype.h>

/**
* *string_toupper - A function that changes all lowercase letters to uppercase.
* @s: parameter
* Return: touppercase
*/

char *string_toupper(char *s)
{
	int i = 0;

	while (i != '\0')
	{
		i++;
		s[i] = toupper(s[i]);
	}
	return (n);
}
