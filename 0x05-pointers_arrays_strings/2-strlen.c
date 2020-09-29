#include "holberton.h"
/**
* _strlen - calculate the lenght of a string
* @s: takes in an char array
* Return: size of string
*/
int _strlen(char *s)
{
	int size_str, count;

	for (count = 0; s[count] != '\0'; count++)
	{
		size_str += 1;
	}

	return (size_str);
}
