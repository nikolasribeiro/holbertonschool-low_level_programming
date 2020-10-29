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
* add_node_end - add node to the end
* @head: pointer to a pointer
* @str: takes in a string
* Return: pointer to the end
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *mr_robot;

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->str = strdup(str);

	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->len = get_length(str);

	if (*head == NULL)
	{
		*head = new_node;
		new_node->next = NULL;
	}

	mr_robot = *head;

	while (mr_robot->next != NULL)
	{
		mr_robot = mr_robot->next;
	}

	mr_robot->next = new_node;
	new_node->next = NULL;

	return (new_node);
}
