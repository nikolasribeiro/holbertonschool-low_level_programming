#include "lists.h"
/**
  * get_nodeint_at_index - return the nth node starting at 0
  * @head: takes in struct listint_t *head
  * @index: takes in an index
  * Return: the integer walker points to
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *mr_robot;
	unsigned int counter = 0;

	mr_robot = head;
	while (mr_robot != NULL)
	{
		if (counter == index)
		{
			return (mr_robot);
		}
		counter++;
		mr_robot = mr_robot->next;
	}
	return (mr_robot);
}
