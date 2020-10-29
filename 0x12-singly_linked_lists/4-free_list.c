#include "lists.h"
/**
 * free_list - free a list
 * @head: the head of the list
 * Return: nothing
 */
void free_list(list_t *head)
{
	list_t *mr_robot;

	while (head != NULL)
	{
		mr_robot = head;
		head = head->next;
		free(mr_robot->str);
		free(mr_robot);
	}
	free(head);
}
