#include "holberton.h"
/**
* swap_int - change the values
* @a: takes in an integer
* @b: takes in an integer
*/
void swap_int(int *a, int *b)
{
	int aux = *a;
	*a = *b;
	*b = aux;
}
