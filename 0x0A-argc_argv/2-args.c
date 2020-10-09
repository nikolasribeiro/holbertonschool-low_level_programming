#include <stdio.h>
/**
* main - entry point
* @argc: takes the number of arguments given
* @argv: takes in array all the arguments
* Return: 0
*/
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
