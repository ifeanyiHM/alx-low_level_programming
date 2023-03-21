#include "main.h"
/**
* print_alphabet -> print the lowercase
*/
void print_alphabet(void)
{
	int j;

	for (j = 'a'; j <= 'z'; j++)

	{
		j++;
		_putchar(j);
	}

	_putchar('\n');
}
