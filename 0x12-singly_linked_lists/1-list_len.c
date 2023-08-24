#include "lists.h"
/**
 * list_len - Handle the length of the element in the list
 * @head: Pointer to the first element in the list
 * Return: Length of the elements in the list
 */
size_t list_len(const list_t *head)
{
	const list_t *ptr = head;
	size_t count = 0;

	while (ptr != NULL)
	{
		count++;
		ptr = ptr->next;
	}
	return (count);
}
