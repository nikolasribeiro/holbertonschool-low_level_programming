#include "holberton.h"
#include <stdlib.h>
/**
* get_length - function to count string length
* @str: takes in string
* Return: returns string length
*/
int get_length(char *str)
{
	int l;

	for (l = 0; str[l] != '\0'; l++)
	{
		continue;
	}

	return (l);
}

/**
* _strdup - returns pointer to a new string, dup of str
* @str: takes in string
* Return: returns pointer to new string
*/
char *_strdup(char *str)
{
	int LENGTH = get_length(str);
	char *copy = (char *)malloc((LENGTH + 1) * sizeof(char));
	int i;

	if (copy == NULL)
	{
		return ('\0');
	}

	for (i = 0; str[i] != '\0'; i++)
	{
		copy[i] = str[i];
	}

	return (copy);

}
