#include <stdio.h>
/**
 * main -	prints all possible different combinations of three digits
 *
 * Return: sucess
 */
int main(void)
{
	int digit1;
	int digit2;
	int digit3;

	for (digit1 = 48; digit1 < 56 ; digit1++)
	{
	for (digit2 = 49; digit2 < 57 ; digit2++)
	{
	for (digit3 = 50; digit3 < 58 ; digit3++)
	{
	if (digit2 > digit1 && digit3 > digit2)
	{
	putchar(digit1);
	putchar(digit2);
	putchar(digit3);
	if (digit1 != 55 || digit2 != 56 || digit3 != 57)
	{
	putchar(',');
	putchar(' ');
	}
	}
	}

	}
	}
	putchar('\n');

	return (0);
}

