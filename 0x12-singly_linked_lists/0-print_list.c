#include "lists.h"
/**
 * print_list - Print the elements in the linked list
 * @head: The first node pointer
 * Return: Length of the string
 */
size_t print_list(const list_t *head)
{
	const list_t *ptr = head;
	size_t count = 0;

	while (ptr != NULL)
	{
		if (ptr->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", ptr->len, ptr->str);
		count++;
		ptr = ptr->next;
	}
	return (count);
}
