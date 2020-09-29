#include "holberton.h"
/**
* reset_to_98 - updates value to 98
* @n: takes in an integer
*/
void reset_to_98(int *n)
{
	int reset = *n;

	reset = 98;
	*n = reset;
}
