#include "lists.h"
/**
  * add_nodeint - adds new node at the beginning of a listint_t list
  * @head: pointer to a pointer
  * @n: takes in an integer
  * Return: pointer to the head
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	if (head == NULL)
	{
		return (0);
	}

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (*head);
}
