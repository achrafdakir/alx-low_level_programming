#include "main.h"
/**
 * _sqrt - function to calculate square
 * _sqrt_recursion - function for square root of a number
 * @n: the input number
 * @i: the number squre
 * Return: returns the natural square root of a number.
 */

int _sqrt(int n, int i)
{
	if (i * i == n)
		return (i);
	else if (i * i < n)
		return (_sqrt(n, i + 1));
	else
		return (-1);
}

/**
 * _sqrt_recursion - function for square root of a number
 * @n: the input number
 * Return: returns the natural square root of a number.
 */


int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}
