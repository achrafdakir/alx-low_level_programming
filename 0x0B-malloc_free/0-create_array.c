#include "main.h"
/**
 * create_array - creates an array of chars
 * @size: size of the array
 * @c: charcter to initialise it
 * Return: pointer to the array or Null
 */
char *create_array(unsigned int size, char c)
{
	char *n = malloc(size);

	if (size == 0 || n == 0)
		return (NULL);
	while (size--)
		n[size] = c;
	return (n);
}
