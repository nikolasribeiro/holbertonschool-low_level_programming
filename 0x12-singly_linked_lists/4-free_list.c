#include "lists.h"
/**
* free_list - free memory
* @head: pointer to type list_t
*/
void free_list(list_t *head)
{
	list_t *mr_robot;

	while (head != NULL)
	{
		mr_robot = head;
		head = mr_robot->next;
		free(mr_robot->str);
		free(mr_robot);
	}
}
