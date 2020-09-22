#include "holberton.h"

/*
*print_alphabet
*is not necessary the
*return because only
*prints in
*terminal a
*result in
*this case
*
*/

void print_alphabet(void)
{
	char l;

	for (l = 'a'; l <= 'z'; l++)
	{
		_putchar(l);
	}
	_putchar('\n');
}
