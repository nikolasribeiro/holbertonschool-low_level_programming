#include "lists.h"
/**
  * free_listint - free the listint_t list
  * @head: takes in a struct type listint_t *head
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = temp->next;
		free(temp);
	}
}
