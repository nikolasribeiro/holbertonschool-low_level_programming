#include <stdlib.h>
#include <stdio.h>
/**
* main - entry point
* @argc: takes the number of arguments given
* @argv: takes in array all the arguments
* Description: __attribute__( (__unused__) ) tells to the compiler that
* this parameter is intencionally unused
* Return: 0
*/
int main(int argc, char *argv[] __attribute__((__unused__)))
{

	printf("%i\n", argc - 1);

	return (0);
}
