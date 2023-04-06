#include "main.h"
#include <stdio.h>

/**
* main - A function that prints its name
* @argc: parameter
* @argv: parameter
* Return: return empty
*/

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
