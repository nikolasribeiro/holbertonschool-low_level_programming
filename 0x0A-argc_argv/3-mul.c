#include <stdio.h>
#include <stdlib.h>
/**
* main - entry point
* @argc: takes the number of arguments given
* @argv: takes in array all the arguments
* Return: 0
*/
int main(int argc, char *argv[])
{

	int i, result = 1;

	if (argc != 3)
	{
		printf("Error\n");
		return (0);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			result *= atoi(argv[i]);
		}
	}
	printf("%i\n", result);
	return (0);
}
