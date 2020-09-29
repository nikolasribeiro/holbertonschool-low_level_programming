#include "holberton.h"
/**
* _puts - prints a string
* @str: takes in an char array
* Return: none
*/
void _puts(char *str)
{
	int count;
	for(count = 0; str[count] != '\0'; count++)
	{
		_putchar(str[count]);
	}
	_putchar('\n');
}
