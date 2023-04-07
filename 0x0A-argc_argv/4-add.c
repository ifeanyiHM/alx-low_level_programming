#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
* main - A function that adds positive numbers
* @argc - parameter 1
* @argv - parameter 2
* Return: - Return empty
*/

int main(int argc, char *argv[])
{
	int i = 1, s = 0;

	while (i < argc)
	{
		s += atoi(argv[i]);
		i++;
	}
	printf("%d\n", s);
	if (!isdigit(argv[i]))
	{
		printf("Error\n");
		return (1);
	}

	/*printf("%d\n", s);*/
	return (0);
}
