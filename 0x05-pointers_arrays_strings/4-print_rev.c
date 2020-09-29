#include "holberton.h"
/**
* print_rev - prints a string in reverse
* @s: takes in an char array
* Return: none
*/
void print_rev(char *s)
{
	int begin, end, count;

	while (s[count] != '\0')
	{
		count++;
	}

	end = count - 1;

	for (begin = 0; begin < count; begin++)
	{
		_putchar(s[end]);
		end--;
	}

	_putchar('\n');
}
