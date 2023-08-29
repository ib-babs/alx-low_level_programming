#include "lists.h"
/**
 * free_listint - Free a linked list
 * @head: List head
 * Return: Void
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
