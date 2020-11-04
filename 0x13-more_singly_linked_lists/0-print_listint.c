#include "lists.h"
/**
* print_listint - prints all the elements of listint_t
* @h: takes in a const struct type *h
* Return: returns the counter
*/
size_t print_listint(const listint_t *h)
{
	int counter;

	if (h == NULL)
	{
		return (0);
	}

	for (counter = 0; h != NULL; counter++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}

	return (counter);
}
