#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int intType;
	long int intTypeLong;
	long long int intTypeLongLong;
	float floatType;
	char charType;

	printf("Size of char: %ld bytes\n", sizeof(charType));
	printf("Size of Int: %ld bytes\n", sizeof(intType));
	printf("Size of Long Int: %lu bytes\n", sizeof(intTypeLong));
	printf("Size of Long Long Int: %ld bytes\n", sizeof(intTypeLongLong));
	printf("Size of float: %ld bytes\n", sizeof(floatType));
	return (0);
}

