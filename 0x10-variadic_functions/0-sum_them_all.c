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

	va_start(valist, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(valist, int);
	}
	va_end(valist);

	return (sum);
}
