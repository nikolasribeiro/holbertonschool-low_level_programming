#include "lists.h"
/**
* print_list - function that prints the elements of a list
* @h: pointer to constat list_t
* Return: size_t
*/
size_t print_list(const list_t *h)
{
	size_t counter = 0;

	if (h == NULL)
	{
		return (0);
	}
	while (h != NULL)
	{
		printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		counter++;
	}
	return (counter);
}

