#include "main.h"
/**
 * factorial - function that returns the factorial of a given number
 * @n: the given number
 * Return: the factorial
 */
int factorial(int n)
{
	int f;

	if (n < 0)
		f = -1;
	else if (n == 0)
		f = 1;
	else
		f = factorial(n-1) * n;
	return (f);
}
