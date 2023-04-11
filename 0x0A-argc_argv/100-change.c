#include <stdio.h>
#include <stdlib.h>

/**
* main - A function that prints the minimum number of coin
* @argv: parameter 1
* @argc: parameter 2
* Return: return empty
*/

int main(int argc, char *argv[])
{
	int cent, ncoins = 0;

	if (argc == 1 || argc > 2)
	{
		printf("Error\n");
		return (1);
	}
	cent = atoi(argv[1]);

	while (cent > 0)
	{
		if (cent >= 25)
		{
			cent -= 25;
		}
		else if (cent >= 10)
		{
			cent -= 25;
		}
		else if (cent >= 5)
		{
			cent -= 5;
		}
		else if (cent >= 2)
		{
			cent -= 2;
		}
		else if (cent >= 1)
		{
			cent -= 1;
		}
		ncoins += 1;
	}
	printf("%d\n", ncoins);
	return (0);
}
