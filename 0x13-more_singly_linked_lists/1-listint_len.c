#include "lists.h"
/*
*
*/
size_t listint_len(const listint_t *h)
{
	int counter;

	if (h == NULL)
	{
		return (0);
	}

	for (counter = 0; h != NULL; counter++)
	{
		h = h->next;
	}

	return (counter);
}
