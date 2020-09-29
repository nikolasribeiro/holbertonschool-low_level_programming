#include "holberton.h"

void print_number(int n)
{
	int x, y, div;
	int z = n;

	div = 10;

	if (n < 0)
	{
		z = z * -1;
		_putchar('-');
	}
	else if (n == 0)
	{
		_putchar('0');
	}
	else
	{
		for (x = 1; z > 0; x++)
		{
			z = z / 10;
		}
			for (y = 0; y < x - 1; y++)
			{
				div = div * 10;


			while (div >= 1)
			{
				_putchar(n / div + '0');
				n = n % div;
				div = div / 10;

			}
		}
	}
}
