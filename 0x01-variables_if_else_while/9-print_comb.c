#include <stdio.h>
/**
* main - Entry point
*
* Return: Always (Success)
*/
int main(void)
{
	int n = 48;

	while (n <= 57)
	{
		putchar(n);
		putchar(44);
		putchar(32);
		n++;
	}
	putchar('\n');
	return (0);
}
