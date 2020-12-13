#include "lists.h"

/**
 * get_dnodeint_at_index - Locates a node in a dlistint_t list.
 * @head: The head of the dlistint_t list.
 * @index: The node to locate.
 *
 * Return: If the node does not exist - NULL.
 *         Otherwise - the address of the located node.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *tmp;
	unsigned int counter = 0;

	tmp = head;
	while (tmp != NULL)
	{
		if (counter == index)
			return (tmp);
		counter++;
		tmp = tmp->next;
	}
	return (tmp);
}