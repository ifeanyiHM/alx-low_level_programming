#include <stdio.h>
#include <string.h>

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/

int main(void)
{
	char str[] = " _putchar";
	int i = 0;

	while (i < strlen(str))

	{
		i++;
		putchar(str[i]);
	}

	putchar('\n');

	return (0);
}
