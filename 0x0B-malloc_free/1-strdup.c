#include "holberton.h"
#include <stdlib.h>


int get_length(char *str)
{
	int l;

	for (l = 0; str[l] != '\0'; l++)
	{
		continue;
	}

	return (l);
}

char *_strdup(char *str)
{
	int LENGTH = get_length(str);
	char *copy = (char *)malloc(LENGTH);
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
