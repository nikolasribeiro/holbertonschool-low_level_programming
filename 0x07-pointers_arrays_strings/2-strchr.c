#include "holberton.h"
/**
* _strchr - locate the character in a string
* @s: takes in a string
* @c: character to locate
* Return: s, the string
*/
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			break;
		}
	}

	if (s[i] == c)
	{
		return (s + i);
	}

	return ('\0');
}
