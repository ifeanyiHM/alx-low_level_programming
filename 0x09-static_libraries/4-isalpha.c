#include "main.h"

/**
* _isalpha -> checks if the character is an alphabet
* @c: character checked
* Return: 1 or 0 either returned
*/

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && 'Z'));
}
