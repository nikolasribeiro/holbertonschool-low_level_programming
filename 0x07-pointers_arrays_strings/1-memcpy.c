#include "holberton.h"
/**
* _memcpy - copy a part of a string with an another string
* @dest: takes in a string
* @src: takes in a string
* @n: number of characters to replace
* Return: s, the string
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; dest[i] != '\0' && i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
