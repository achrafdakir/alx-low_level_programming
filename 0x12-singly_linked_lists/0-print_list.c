#include "lists.h"
/**
 * strlen - the lenght of string
 * @s: the input string
 * Return: the length of string
 */
int _strlen(char *s)
{
	int i;

	if (s == NULL)
		return (0);

	while (*s++)
		i++;
	return (i);

}

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
		{
			printf("[%d] %s\n", strlen(h->str), h->str);
			h = h->next;
			i++;
		}
		else
		{
			printf("[%d] %s\n", strlen(h->str), "(nil)");
			h = h->next;
			i++;
		}
	}
	return (i);
}
