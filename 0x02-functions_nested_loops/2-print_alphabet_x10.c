#include "main.h"

/**
* print_alphabet -> prints 10x the alphabets
*/

void print_alphabet_x10(void)
{

	int k = 0, j;

	while (i < 10)

	{

		j = 'a';
		while (j < 'z')
		{
			_putchar(j);
		}

		_putchar('\n');
		i++;
	}

}
