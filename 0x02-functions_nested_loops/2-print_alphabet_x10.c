#include "main.h"

/**
* print_alphabet -> prints 10x the alphabets
*/

void print_alphabet_x10(void)
{

	int k, j;

	for (j = 0; j < 10; j++)

	{

		for (k = j; k <= 'z'; k++)
		{
			_putchar(k);
		}

		_putchar('\n');
	}

}
