#include "lists.h"
/**
* free_dlistint - Free the list
* @head: Head of the node
* Return: Void
*/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *ptr = head;
	while (head != NULL)
	{
		head = head->next;
		free(head);
		ptr = head;
	}
}
