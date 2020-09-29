#include "holberton.h"

void print_rev(char *s)
{
	int count;

	for(count = 0; count >= 0; count--)
	{
		_putchar(s[count]);
	}
	
	_putchar('\n');
}
