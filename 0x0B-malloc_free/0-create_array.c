#include "holberton.h"
#include <stdlib.h>
/**
* create_array - func create an array of chars, initialized w/ specific char
* @size: size of the array
* @c: starting character
* Return: pointer to array, ar_ptr
*/
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr = (char *)malloc(size);

	if (arr == NULL || size == 0)
	{
		return ('\0');
	}

	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	return (arr);
}
