#include "holberton.h"

int helper(int x, int y);
/**
  * _sqrt_recursion - returns the natural square root of a number
  * @n: takes in an integer
  * Return: a starting number and n to compare
  */
int _sqrt_recursion(int n)
{
	return (helper(1, n));
}
/**
  * helper - helps to find square root
  * @x: takes in an integer
  * @y: takes in an integer
  * Return: return x compared to y
  */
int helper(int x, int y)
{
	if (x * x == y)
	{
		return (x);
	}
	else if (x * x > y)
	{
		return (-1);
	}
	else
	{
	return (helper(x += 1, y));
	}
}
