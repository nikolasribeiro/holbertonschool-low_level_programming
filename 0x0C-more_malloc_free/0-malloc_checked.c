#include "holberton.h"
#include <stdlib.h>
/**
* malloc_checked - a function that allocates memory using malloc
* @b: takes in an unsigned integer
* Return: returns a pointer to the allocated memory
*/
void *malloc_checked(unsigned int b)
{
	void *value;

	value = malloc(b);

	if (value == NULL)
	{
		exit(98);
	}

	return (value);
}
