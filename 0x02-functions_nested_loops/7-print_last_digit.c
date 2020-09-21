#include "holberton.h"
int print_last_digit(int x)
{
	int res = x % 10;
	if(x < 0)
	{
		res = res * -1;
	}
	_putchar(res + '0');
	return(res);
}
