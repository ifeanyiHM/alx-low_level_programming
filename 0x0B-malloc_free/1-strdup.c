#include "main.h"
#include <stdlib.h>

/**
* _strdup - A function that returns a pointer to a newly allocated space
* @str: A Parameter
* Return: returns empty
*/

char *_strdup(char *str)
{
	char *s;
	unsigned int i = 0;
	unsigned int c = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[c])
	{
		c++;
	}
	s = malloc(sizeof(char) * (c + 1));

	if (s == NULL)
	{
		return (NULL);
	}

	while ((s[i] = str[i]) != '\0')
	{
		i++;
	}
	return (s);
}
