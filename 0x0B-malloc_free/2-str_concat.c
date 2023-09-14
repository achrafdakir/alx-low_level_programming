#include "main.h"
/**
 * str_concat - concatenates two strings
 * @s1: the first input
 * @s2: the second input
 * Return: str point to a new allocated memory
 */
char *str_concat(char *s1, char *s2)
{
	char *c;
	int i, size1 = 0, size2 = 0;
	if (s1 == NULL)
		s1 = '\0';
	if (s2 == NULL)
		s2 = '\0';

	while (s1[size1])
		size1++;
	while (s2[j])
		size2++;

	s = malloc(sizeof(char) * (size1 + size2) + 1);

	if (m == 0)
		return (NULL);

	for (i = 0; i <= size1 + size2; i++)
	{
		if (i < size1)
			m[i] = s1[i];
		else
			m[i] = s2[i - size1];
	}
	m[i] = '\0';
	return (m);
}
