#include "lists.h"
/**
* free_dlistint - Free the list
* @head: Head of the node
* Return: Void
*/
void free_dlistint(dlistint_t *head)
{
	while (head != NULL)
	{
		free(head->next);
		head = head->next;
	}
	free(head);
	head = NULL;
}
