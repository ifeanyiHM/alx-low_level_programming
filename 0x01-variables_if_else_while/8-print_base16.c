#include <stdio.h>
/**
* main - Entry point
* Return: Always 0 (Success)
*/
int main(void)
{
	int n = 48;
	int y = 97;

	while (n <= 57)
	{
		putchar(n);
		n++;
	}
	while (y <= 102)
	{
		putchar(y);
		y++;
	}
	putchar('\n');
	return (0);
}
