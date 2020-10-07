#include "holberton.h"
/**
* factorial - returns the factorial of a given number
* @n: takes in an integer
* Return: n * n - 1 so it * to the number less
*/
int factorial(int n)
{
	int resultado;

	if (n < 0)
	{
		return (-1);
	}

	else if(n == 1)
	{
		resultado = 1;
	}
	else
	{
		resultado = n * factorial(n - 1);
	}

	return (resultado);

}
