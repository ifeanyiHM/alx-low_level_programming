#include "main.h"

/**
* print_alphabet -> prints 10x the alphabets
*/

void print_alphabet_x10(void)
{

	int j, k;

	for (j = 'a'; j <= 'z'; j++)

	{
		_putchar('\n');

		for (k = j; k <= 'z'; k++)
		{
			_putchar(k);
		}
	}

}
