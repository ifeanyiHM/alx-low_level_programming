#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* main - A function that multiplies two numbers
* @argc: parameter 1
* @argv: parameter 2
* Return: return empty
*/

int main(int argc, char *argv[])
{
	int s = 1;

		if (argc < 3 || argc > 3)
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			int a, b;

			a = atoi(argv[1]);
			b = atoi(argv[2]);
			s = a * b;
		}
	printf("%d\n", s);
	return (0);
}
