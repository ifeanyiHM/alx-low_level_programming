#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/

int main(void)
{
	int d, p, y;

	for (d = '0'; d < '9'; d++)
	{

	for (p = d + 1; p <= '9'; p++)
	{

	for (y = p + 1; y <= '9'; y++)
	{
	if (p != d && y != p)
	{
	putchar(d);
	putchar(p);
	putchar(y);
	if (d == '7' && p == '8' && y == '9')
	continue;
	putchar(',');
	putchar(' ');
	}
	}
	}
	}
	putchar('\n');
	return (0);
}
