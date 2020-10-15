#include "holberton.h"
#include <stdlib.h>
/**
  * _calloc - function that allocates memory from an array using malloc
  * @nmemb: number of elements to be allocated
  * @size: size of the elements
  * Return: pointer to the allocated memory of NUll if failed
  */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *neo;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	neo = malloc(nmemb * size);
	
	if (neo == NULL)
	{
		return (NULL);
	}
	
	
	for (i = 0; i < nmemb * size; i++)
	{
		neo[i] = 0;
	}
	
	return (neo);
}
