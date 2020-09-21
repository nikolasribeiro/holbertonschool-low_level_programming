#include "holberton.h"
/*
 *
 *
 */
void print_alphabet_x10(void)
{
	int i;
	char l;

	for (i = 0; i < 11; i++)
	{
		for (l = 'a'; l <= 'z'; l++)
		{
			_putchar(l);
		}
		_putchar('\n');
	}

}
