#include "lists.h"
/**
 * print_listint - Print the elements in the linked list
 * @head: The first node pointer
 * Return: Length of the string
 */
size_t print_listint(const listint_t *head)
{
	int count = 0;

	while (head != NULL)
	{
		printf("%d\n", head->n);
		head = head->next;
		count++;
	}
	return (count);
}
