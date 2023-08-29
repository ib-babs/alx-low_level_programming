#include "lists.h"
/**
 * sum_listint - Sum the data in the list
 * @head: Pointer to the first list item
 * Return: Sum of all node data
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}

