#include "lists.h"
/**
* get_length - function to count string length
* @str: takes in string
* Return: returns string length
*/
int get_length(const char *str)
{
	int l;

	for (l = 0; str[l] != '\0'; l++)
	{
		continue;
	}

	return (l);
}
/**
* add_node - function that adds a new node
* @head: pointer to pointer
* @str: takes in a string
* Return: pointer to the head
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	if (head == NULL)
	{
		return (0);
	}

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->str = strdup(str);
	new_node->len = get_length(str);
	new_node->next = *head;
	*head = new_node;

	return (*head);
}
