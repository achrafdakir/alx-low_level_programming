#include <stdio.h>
/**
 * main -  all possible combinations of single-digit numbers
 *
 * Return: sucess
 */
int main(void)
{
	int digit = 48;

	while (digit < 58)
	{
	putchar(digit);
	if (digit != 57)
	{
	putchar(',');
	}
	putchar(' ');
	digit++;
	}

	return (0);
}

