#include "holberton.h"
/**
* _strncat - concats two strings
* @dest: destination of new string
* @src: source of string
* @n: amount of characters you want to print from src
* Return: return dest
*/
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j;

	while (dest[i] != '\0')
	{
		i++;
	}

	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[i + j] = src[j];
	}

	return (dest);
}
