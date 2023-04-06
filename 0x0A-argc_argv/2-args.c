#include "main.h"
#include <stdio.h>

/**
* main - A function that prints all arguments it recieves.
* @argc: parameter 1
* @argv: parameter 2
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
