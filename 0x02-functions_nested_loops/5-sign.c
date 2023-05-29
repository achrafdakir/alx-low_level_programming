# include "main.h"

/**
 * print_sign - print the sign of a number.
 *
 * @n:Number to check.
 * Return: 1-if n positif 0- if n is nul -1 if n is negatif
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar ('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
