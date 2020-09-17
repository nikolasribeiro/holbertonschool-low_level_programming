#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char hexa[] = "0123456789abcdef\n";

	for(int x = 0; x < 17; x++)
	{
		putchar(hexa[x]);
	}
	putchar('\n');
	return (0);
}
