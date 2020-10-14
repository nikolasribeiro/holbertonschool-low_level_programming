#include "holberton.h"
#include <stdlib.h>

int **alloc_grid(int width, int height)
{
	int *matrix;

	matrix = (int*)malloc(width * sizeof(int) + height * sizeof(int));
	
	return (*matrix);
}
