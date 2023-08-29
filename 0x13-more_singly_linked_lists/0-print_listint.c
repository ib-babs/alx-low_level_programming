#include "lists.h"
/**
 * print_listint - Print the elements in the linked list
 * @head: The first node pointer
 * Return: Length of the string
 */
size_t print_listint(const listint_t *head)
{
	const listint_t *ptr = head;
	size_t count = 0;

	if (ptr == NULL)
		return (0);
	while (ptr != NULL)
	{
		printf("%u\n", ptr->n);
		count++;
		ptr = ptr->next;
	}
	return (count);
}
