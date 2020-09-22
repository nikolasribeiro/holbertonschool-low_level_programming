#include "holberton.h"
/*
 *
 *
 */
void print_alphabet_x10(void)
{
	int i = 0;
	char l;

	while (i < 10)
	{
		for (l = 'a'; l <= 'z'; l++)
		{
			_putchar(l);
		}
		_putchar('\n');
		i++;
	}

}
