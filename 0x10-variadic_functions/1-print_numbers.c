#include "variadic_functions.h"
/**
* print_numbers - prints numbers followed by newline
* @separator: string between numbers
* @n: takes in an int
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list valist;

	va_start(valist, n);
	for (i = 0; i < n; i++)
	{
		printf("%i", va_arg(valist, int));
		if (separator)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(valist);
}
