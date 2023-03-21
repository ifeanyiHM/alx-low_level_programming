#include <stdio.h>
#include <string.h>

/**
* main - Entry point
*
Return Always 0 (Success)
*/

int main(void)
{
	char str[] = "_putchar";

	for (int i = 0; i < strlen(str); i++)
	{
		putchar(str[i]);
	}
	putchar('\n');

	return (0);
}
