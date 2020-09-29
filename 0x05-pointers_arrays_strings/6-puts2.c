#include "holberton.h"
/**
* puts2 - prints a string with two
* @str: takes in an char array
* Return: none
*/
void puts2(char *str)
{
	int count;

	for (count = 0; str[count] != '\0'; count++)
	{
		if (str[count] % 2 == 0)
		{
			_putchar(str[count]);
		}
	}
	_putchar('\n');
}
