#include "lists.h"
/**
 * print_listint_safe - Print lit
 * @head: Pointer to head
 * Return: NUmber of nods
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *n, *c;
	size_t countn = 0, count_c = 0;

	n = head;
	c = head;
	while (n != NULL)
	{
		while (countn > count_c)
		{
			if (n == c)
			{
				printf("-> [%p] %d\n", (void *)n, n->n);
				return (countn);
			}
			count_c++;
		}
		c = head;
		count_c = 0;
		printf("[%p] %d\n", (void *)n, n->n);
		countn++;
		n = n->next;
	}
	return (countn);
}
