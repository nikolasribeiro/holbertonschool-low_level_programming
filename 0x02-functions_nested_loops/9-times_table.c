#include "holberton.h"

void times_table(void)
{
	int valor, multi, res;

	for (valor = 0; valor <= 9; valor++)
	{
		for (multi = 0; multi <= 9; multi++)
		{
			res = valor * multi;
			if (multi == 0)
			{
				_putchar(res + '0');
			}
			else if (res <= 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(res + '0');
			}
			else if (res >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(res / 10 + '0');
				_putchar(res % 10 + '0');
			}
		}
		_putchar('\n');
	}
}
