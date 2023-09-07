#include "main.h"
/**
 * _strlen_recursion - function that returns the length of a string.
 * @s: the input string
 * Return: the length of string
 */
int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s != '\0')
	{
		len = _strlen_recursion(s + 1) + 1;
	}
	return (len);
}
