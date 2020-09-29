#include "holberton.h"
/**
* _strcpy - copies a string
* @dest: destionation string
* @src: source string
* Return: destination
*/
char *_strcpy(char *dest, char *src)
{
	int i, count;

	for (count = 0; src[count] != '\0'; count++)
	{
		continue;
	}

	for (i = 0; i < count; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}

