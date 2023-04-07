#include <stdio.h>

/**
* main - A function that the number of arguments passed into it.
* @argc: parameter 1
* @argv: parameter 2
* Return: return empty
*/

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
