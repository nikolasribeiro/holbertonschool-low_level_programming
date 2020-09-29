#include "holberton.h"
/**
* puts_half - prints half of a string
* @str: takes in a string
*/

void puts_half(char *str)
{
	int i, length;

	length = get_length(str);
	length = length + 1;

	for (i = length / 2; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}

/**
* get_length - return string length
* @s: get a char array
* Return: i - string length
*/

int get_length(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		continue;
	}

	return (i);
}
