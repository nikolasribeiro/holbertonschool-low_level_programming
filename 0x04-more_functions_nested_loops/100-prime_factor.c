#include <stdio.h>
/**
  * main - entry block
  * @void: no argument
  * Return: 0
  */
int main(void)
{
	long int x;
	long int num = 612852475143;

	for (x  = 2; x <= num; x++)
	{
		if (num % x == 0)
		{
			num = num / x;
			x--;
		}
	}
	printf("%li\n", x);
	return (0);
}
