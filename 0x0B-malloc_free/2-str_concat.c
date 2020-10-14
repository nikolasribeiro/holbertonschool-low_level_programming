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



char *str_concat(char *s1, char *s2)
{
	char *concat;
	int i, j, l1, l2;

	if (s1 == NULL)
	{
		s1 = "";
	}
	else
	{
		l1 = get_length(s1);
	}

	if (s2 == NULL)
	{
		s2 = " ";
	}
	else
	{
		l2 = get_length(s2);
	}

	concat = (char *)malloc((l1 * sizeof(char) + l2 * sizeof(char)) + 1);

	if (concat == NULL)
	{
		return (NULL);
	}

	for (i = 0; s1[i] != '\0'; i++)
	{
		concat[i] = s1[i];
	}

	for (j = 0; s2[j] != '\0'; j++)
	{
		concat[i + j] = s2[j];
	}

	return (concat);

}
