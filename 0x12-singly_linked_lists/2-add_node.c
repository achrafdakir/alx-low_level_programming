#include "lists.h"
/**
 * add_node -  adds a new node at the beginning of a list
 * @head: pointer to head of list
 * @str: input string
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *addhead = malloc(sizeof(list_t));

	if (!head || !addhead)
		return (NULL);

	if (str)
	{
		addhead->str = strdup(str);
		addhead->len = _strlen(addhead->str);
	}
	addhead->next = *head;
	*head = addhead;
	return (addhead);
}

/**
 * _strlen - returns length of str
 * @s: char
 * Return: c
 */
int _strlen(const char *s)
{
	int c = 0;

	while (s[c] != '\0')
		c++;
	return (c);
}
