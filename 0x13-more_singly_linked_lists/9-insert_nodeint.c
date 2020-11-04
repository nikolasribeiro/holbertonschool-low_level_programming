#include "lists.h"
/**
  * insert_nodeint_at_index - inserts a new node at a given position
  * @head: pointer to a pointer
  * @idx: takes in the index
  * @n: takes in an integer
  * Return: NULL if function fail
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node;
	listint_t *temp;
	unsigned int counter = 0;

	if (head == NULL)
	{
		return (NULL);
	}

	new_node = malloc(sizeof(listint_t));
	new_node->n = n;

	if (newNode == NULL)
	{
		return (NULL);
	}

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	temp = *head;
	while (temp != NULL)
	{
		if (counter + 1 == idx)
		{
			new_node->next = temp->next;
			temp->next = new_node;
			return (new_node);
		}
		temp = temp->next;
		counter++;
	}

	free(new_node);
	return (NULL);
}
