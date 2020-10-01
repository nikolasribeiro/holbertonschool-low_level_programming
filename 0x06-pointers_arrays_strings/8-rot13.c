#include "holberton.h"
/**
  * rot13 - encodes string to rot13
  * @s: takes in a string
  * Return: s, the string
  */
char *rot13(char *s)
{
	int i, j;

	char first_abc[] = "abcdefghijklmABCDEFGHIJKLM";
	char second_abc[] = "nopqrstuvwxyzNOPQRSTUVWXYZ";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; first_abc[j] != '\0'; j++)
		{
			if (s[i] == first_abc[j])
			{
				s[i] = second_abc[j];
			}
			else if (s[i] == second_abc[j])
			{
				s[i] = first_abc[j];
			}
		}
	}
	return (s);
}
