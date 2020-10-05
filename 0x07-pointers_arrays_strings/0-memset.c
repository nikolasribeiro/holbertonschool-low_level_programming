#include "holberton.h"
/**
* _memset - replace a part of a string with a character
* @s: takes in a string
* @b: takes a char
* @n: number of characters to replace
* Return: s, the string
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
