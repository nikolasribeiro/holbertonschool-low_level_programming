#include "lists.h"
/**
  * listint_len - returns the number of elements in linked listint_t list
  * @h: takes in a const struct type listint_t *h
  * Return: returns the counter
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
