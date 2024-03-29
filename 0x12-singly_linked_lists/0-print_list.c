#include "lists.h"
/**
 * print_list - prints all the elements of a list_t
 * @h: pointer of head
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		if (h->str)
			printf("[%d] %s\n", h->len, h->str);

		else
			printf("[0] (nil)\n");

		h = h->next;
		i++;
	}
	return (i);
}
