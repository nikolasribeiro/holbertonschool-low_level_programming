#include "holberton.h"
/**
 *print_most_numbers - check the code for Holberton School students.
 */
void print_most_numbers(void)
{
	for (int i = 0; i < 10; i++)
	{
		if (i != 2 && i != 4)
		{
			_putchar(i + '0');
		}

	}
	_putchar('\n');
}