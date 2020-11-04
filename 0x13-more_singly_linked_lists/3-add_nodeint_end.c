#include "lists.h"
/*
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *elliot_alderson;

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;

	if (*head == NULL)
	{
		*head = new_node;
		new_node->next = NULL;
	}

	elliot_alderson = *head;
	
	while (elliot_alderson->next != NULL)
	{
		elliot_alderson = elliot_alderson->next;
	}

	elliot_alderson->next = new_node;
	new_node->next = NULL;

	return (new_node);
}

