#include <stdio.h>
/**
 * main - Print alphabet
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j;
	for (i = 48; i <= 57; i++)
	{
		for (j = 48; j <= 57; j++)
		{
			putchar(i);
			putchar(j);
			if (j != 57 || i != 57)
			{
				putchar(44);
				putchar(32);
			}
		}
	}
	putchar('\n');
	return (0);
}
