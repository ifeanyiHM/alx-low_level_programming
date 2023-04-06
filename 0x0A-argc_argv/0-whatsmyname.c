#include "main.h"
#include <stdio.h>

/**
* main - A function that prints its name
* @argc: parameter
* @argv: parameter
* Return: return empty
*/

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
