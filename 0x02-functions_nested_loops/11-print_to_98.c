#include "holberton.h"
#include <stdio.h>

void print_to_98(int n)
{
	int inc;

	if (n > 98)
	{
		for (inc = n; inc > 97; inc--)
		{
			printf("%d", inc);
			if (inc != 98)
			{
				printf(", ");
			}
		}
	}
	else
	{
		for (inc = n; inc < 99; inc++)
		{
			printf("%d", inc);
			if (inc != 98)
			{
				printf(", ");
			}
		}

	}
	printf("\n");
}
