#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
* sum_them_all - returns the sum of all its parameters
* @n: takes in an integer
* Return: sum of all integers
*/
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum = 0;
	va_list valist;

	if (n == 0)
	{
		return (0);
	}

	va_start(valist, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(valist, unsigned int);
	}
	va_end(valist);

	return (sum);
}
