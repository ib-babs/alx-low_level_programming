#include "lists.h"
/**
* sum_dlistint - Sum the data in the node
* @head: Head of the list
* Return: Sum of the list data, 0 otherwise
*/
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (!head)
		return (0);

	while (head && head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
