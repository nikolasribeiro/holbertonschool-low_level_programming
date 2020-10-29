#include "lists.h"
/**
* free_list - free memory
* @head: pointer to type list_t
*/
void free_list(list_t *head)
{
	while (head != NULL)
	{
		free(head->next);
		if (head->str)
		{
			free(head->str);
		}
		free(head);
	}
}
