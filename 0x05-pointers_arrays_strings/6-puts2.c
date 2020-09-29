#include "holberton.h"
/**
* puts2 - prints a string with two
* @str: takes in an char array
* Return: none
*/
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] % 2 == 0)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
